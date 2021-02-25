#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <vector>

using namespace std;

enum ExceptionStack {
    EmptyStack
};

template<class T>
class Stack {
private:
    vector<T> container;
public:
    void Push(T value)
    {
        container.push_back(value);
    }

    T Pop()
    {
        if (isEmpty()) {
            throw ExceptionStack::EmptyStack;
        } else {
            auto end = container.end() - 1;
            auto temp = *end;
            container.pop_back();
            return temp;
        }
    }

    T Fetch()
    {
        auto end = container.end() - 1;
        return *end;
    }

    bool isEmpty()
    {
        return container.empty();
    }

    int Size()
    {
        return container.size();
    }
};


#endif //STACK_STACK_H
