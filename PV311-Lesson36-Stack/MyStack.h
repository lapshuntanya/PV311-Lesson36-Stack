#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace MyStack {
	template <typename T>
	class DNode {
	public:
		T info;
		DNode* prev;
		DNode* next;

		DNode(T value) {
			info = value;
			prev = next = nullptr;
		}
	};


}