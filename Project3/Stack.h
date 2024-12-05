#pragma once 

#include "Element.h"
template <typename T>
class Stack
{
public:
    Element<T>* top;
    int count;

    Stack(void);
    ~Stack(void);

    void Push(Element<T>* e);
    Element<T>* Pop();
    void Print();
    void PrintSum();
};
