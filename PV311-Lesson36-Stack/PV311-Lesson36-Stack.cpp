#include "MyStack.h"

int main()
{
    MyStack::Stack<int> a;
    a.push(5);
    a.push(-3);
    a.push(9);
    a.push(13);
    a.showInfo();//5 -3 9 13
    cout << "_________________________________________\n\n";

    //Обробка стеку
    while (!a.isEmpty())
    {
        cout << a.top() << " "; //Отримуємо останній елемент стеку
        a.pop();//Видаляємо його із стеку
    }
    cout << endl;
}

