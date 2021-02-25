#ifndef STACK_STACK_H
#define STACK_STACK_H

#include "Container.h"

using namespace std;

enum ExceptionStack {
    EmptyStack
};

template<class Type>
class Stack : public Container<Type> {
public:
    Type Pop() override
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

    Type Fetch() override
    {
        if (isEmpty()) {
            throw ExceptionStack::EmptyStack;
        } else {
            auto end = container.end() - 1;
            return *end;
        }
    }
};

#endif //STACK_STACK_H
