#include <iostream>

#include "Stack.h"

using namespace std;

int main()
{
    system("chcp 65001");

    Stack<int> stack;
    stack.Push(5);
    stack.Push(4);
    stack.Push(6);

    cout << stack.Fetch() << endl;
    cout << stack.Fetch() << endl;

    cout << stack.Pop() << endl;
    cout << stack.Pop() << endl;


    return 0;
}
