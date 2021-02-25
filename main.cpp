#include <iostream>

#include "Stack.h"

using namespace std;

void PrintStack(int value)
{
    cout << value << " ";
}

int Sum10(int value)
{
    return value + 10;
}

int Mul2(int value)
{
    return value * 2;
}

int main()
{
    system("chcp 65001");

    Stack<int> stack;

    cout << "stack.size() = " << stack.Size() << endl;
    stack.Push(5);
    cout << "stack.size() = " << stack.Size() << endl;
    stack.Push(4);
    cout << "stack.size() = " << stack.Size() << endl;
    stack.Push(6);
    cout << "stack.size() = " << stack.Size() << endl;

    stack.ForEach(PrintStack);
    cout << endl;

    stack.ForEach(Sum10);
    stack.ForEach(PrintStack);
    cout << endl;

    stack.ForEach(Mul2);
    stack.ForEach(PrintStack);
    cout << endl;

    try {
        cout << stack.Pop() << endl;
        cout << "stack.size() = " << stack.Size() << endl;
        cout << stack.Pop() << endl;
        cout << "stack.size() = " << stack.Size() << endl;
        cout << stack.Pop() << endl;
        cout << "stack.size() = " << stack.Size() << endl;
        cout << stack.Pop() << endl;
        cout << "stack.size() = " << stack.Size() << endl;
    } catch (ExceptionStack exception) {
        if (exception == ExceptionStack::EmptyStack) {
            cout << "Вы достигли дна" << endl;
        }
    }

    stack.Push(6);
    cout << "stack.size() = " << stack.Size() << endl;

    return 0;
}
