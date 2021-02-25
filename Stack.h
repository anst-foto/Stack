#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <vector>

using namespace std;

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
        return container.back();
    }

    T Fetch()
    {
        return container.at(container.back());
    }

};


#endif //STACK_STACK_H
