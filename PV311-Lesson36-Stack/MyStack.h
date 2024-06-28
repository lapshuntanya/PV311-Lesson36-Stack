#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace MyStack {

	template <typename Type>
	class DNode {
	public:
		Type info;
		DNode* prev;
		DNode* next;

		DNode(Type value) {
			info = value;
			prev = next = nullptr;
		}
	};

	template <typename U>
	class Stack {
		//LIFO = last in first out
		DNode<U>* head; //голова = адреса першого вузла
		DNode<U>* tail; //хвіст = адреса останнього вузла
	public:
		Stack() {
			head = tail = nullptr;
		}
		~Stack() { }

		bool isEmpty()const {
			return head == nullptr || tail == nullptr;
		}

		void push(U value) {
			DNode<U>* el = new DNode<U>(value);

			if (isEmpty()) head = tail = el;
			else {
				el->prev = tail;
				tail->next = el;
				tail = el;
			}
		}

		void pop() {
			if (!isEmpty()) {
				if (head == tail) { //Якщо залишився один вузол
					delete head;
					head = tail = nullptr;
				}
				else {//Якщо декілька вузлів
					tail = tail->prev;
					delete tail->next;
					tail->next = nullptr;
				}
			}
		}

		U top()const {
			if (isEmpty()) throw "Stack is empty!";

			return tail->info;
		}

	};
}