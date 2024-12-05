#include "Element.h"
#include "Stack.h"
#include <iostream>

using namespace std;

int main() {
    Element<double> e1, e2, e3, e4, e5;
    e1.value = 10.5;
    e2.value = 20.5;
    e3.value = 30.5;
    e4.value = 40.5;
    e5.value = 50.5;

    Stack<double> stack;
    stack.Push(&e1);
    stack.Push(&e2);
    stack.Push(&e3);
    stack.Push(&e4);
    stack.Push(&e5);

    stack.Print();
    stack.PrintSum();

    stack.Pop();
    stack.PrintSum();

    return 0;
}
