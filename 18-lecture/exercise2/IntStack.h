#ifndef INT_STACK_H
#define INT_STACK_H

#include <vector>

class IntStack 
{
public:
    bool isEmpty();
    void push(int element);
    int pop();
    int top();
private:
    std::vector<int> elements;
};

#include "IntStack.cpp"

#endif // INT_STACK_H
