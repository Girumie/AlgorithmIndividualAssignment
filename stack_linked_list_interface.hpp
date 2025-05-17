// here we write the interface of the stack linked list

#ifndef STACK_LINKED_LIST_INTERFACE_HPP
#define STACK_LINKED_LIST_INTERFACE_HPP
#include <iostream>

template <typename T>
class StackLinkedList {
public:
    // Constructor: Initializes an empty stack
    StackLinkedList();

    // Destructor: Cleans up the stack
    ~StackLinkedList();

    // Push: Adds an element to the top of the stack
    void push(const T& value);

    // Pop: Removes the top element from the stack
    void pop();

    // Top: Returns the top element without removing it
    T top() const;

    // Is Empty: Checks if the stack has no elements
    bool isEmpty() const;

    // Size: Returns the number of elements in the stack
    int size() const;

    // Clear: Removes all elements from the stack
    void clear();

    // Print: Displays all elements in the stack
    void print() const;

private:
    // Opaque pointer to the implementation details
    struct Node;
    Node* head;

    // Counter to keep track of the number of elements in the stack
    int count;
};

#endif
