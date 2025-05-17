// here we write the implementation of the stack linked list

#ifndef STACK_LINKED_LIST_IMPLEMENTATION_HPP
#define STACK_LINKED_LIST_IMPLEMENTATION_HPP

#include "stack_linked_list_interface.hpp"
#include <iostream>
//#include <stdexcept>

// Node structure for the linked list
template <typename T>
struct StackLinkedList<T>::Node {
    T data;
    Node* next;

    Node(const T& value) : data(value), next(nullptr) {}
};

// Constructor: Initializes an empty stack
template <typename T>
StackLinkedList<T>::StackLinkedList() : head(nullptr), count(0) {}

// Destructor: Cleans up the stack
template <typename T>
StackLinkedList<T>::~StackLinkedList() {
    clear();
}

// Push: Adds an element to the top of the stack
template <typename T>
void StackLinkedList<T>::push(const T& value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    count++;
}

// Pop: Removes the top element from the stack
template <typename T>
void StackLinkedList<T>::pop() {
    if (isEmpty()) {
        throw std::underflow_error("Stack is empty. Cannot pop.");
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    count--;
}

// Top: Returns the top element without removing it
template <typename T>
T StackLinkedList<T>::top() const {
    if (isEmpty()) {
        throw std::underflow_error("Stack is empty. Cannot access top.");
    }
    return head->data;
}

// Is Empty: Checks if the stack has no elements
template <typename T>
bool StackLinkedList<T>::isEmpty() const {
    return head == nullptr;
}

// Size: Returns the number of elements in the stack
template <typename T>
int StackLinkedList<T>::size() const {
    return count;
}

// Clear: Removes all elements from the stack
template <typename T>
void StackLinkedList<T>::clear() {
    while (!isEmpty()) {
        pop();
    }
}

// Print: Displays all elements in the stack
template <typename T>
void StackLinkedList<T>::print() const {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

#endif
