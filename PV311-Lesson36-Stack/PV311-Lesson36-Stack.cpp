#include "MyStack.h"

void DEC_to_BIN(int a) {
    MyStack::Stack<bool> bin;

    while (a > 0) {
        bin.push(a % 2);
        a /= 2;
    }

    cout << "Binary: ";
    while (!bin.isEmpty())
    {
        cout << bin.top();
        bin.pop();
    }
    cout << endl;
}

int main()
{
   /* MyStack::Stack<int> a;
    a.push(5);
    a.push(-3);
    a.push(9);
    a.push(13);
    a.showInfo();//5 -3 9 13
    cout << "_________________________________________\n\n";

    //Обробка стеку
    while (!a.isEmpty())
    {
        cout << a.top() << " delete\n"; //Отримуємо останній елемент стеку
        a.showInfo();
        a.pop();//Видаляємо його із стеку
    }
    cout << endl;*/


}

