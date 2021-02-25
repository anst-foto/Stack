#ifndef STACK_CONTAINER_H
#define STACK_CONTAINER_H

#include <vector>

using namespace std;

template<class T>
class Container {
protected:
    vector<T> container;
public:
    bool isEmpty()
    {
        return container.empty();
    }

    int Size()
    {
        return container.size();
    }

    void Push(T value)
    {
        container.push_back(value);
    }

    virtual T Pop() = 0;

    virtual T Fetch() = 0;
};


#endif //STACK_CONTAINER_H
