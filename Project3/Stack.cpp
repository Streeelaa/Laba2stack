#include "Stack.h"
#include <iostream>

using namespace std;
template <typename T>
Stack<T>::Stack() {
    top = nullptr;
    count = 0;
}
template <typename T>
Stack<T>::~Stack() {
}
template <typename T>
void Stack<T>::Push(Element<T>* e) {
    if (e == nullptr)
        return;

    e->next = top; 
    top = e;       
    count++;

    cout << "Element " << e->value << " pushed to stack" << endl;
}
template <typename T>
Element<T>* Stack<T>::Pop() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
        return nullptr;
    }

    Element<T>* e = top;
    top = top->next; 
    e->next = nullptr;
    count--;

    cout << "Element " << e->value << " popped from stack" << endl;
    return e;
}
template <typename T>
void Stack<T>::Print() {
    if (count < 1) {
        cout << "Stack is empty" << endl;
        return;
    }

    Element<T>* e = top;
    while (e != nullptr) {
        cout << e->value << " ";
        e = e->next;
    }
    cout << endl;
}
template <typename T>
void Stack<T>::PrintSum() {
    if (count < 1) {
        cout << "Stack is empty. Sum is 0." << endl;
        return;
    }

    T sum = 0;
    Element<T>* current = top;

    // Проходим по всем элементам стека

    while (current != nullptr) {
        sum += current->value;  // Добавляем значение элемента к сумме
        current = current->next; // Переходим к следующему элементу
    }

    cout << "Sum of all elements in the stack: " << sum << endl;
}
