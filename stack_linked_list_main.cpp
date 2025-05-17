// here we write the main executable for the stack linked list
#include "stack_linked_list_interface.hpp"
#include "stack_linked_list_implementation.hpp"
#include <iostream>

int main() {
    // Create a stack of integers
    StackLinkedList<int> stack;

    // Push elements onto the stack
    std::cout << "Pushing elements onto the stack: 10, 20, 30" << std::endl;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // Print the stack
    std::cout << "Current stack: ";
    stack.print();

    // Display the top element
    std::cout << "Top element: " << stack.top() << std::endl;

    // Pop an element from the stack
    std::cout << "Popping the top element..." << std::endl;
    stack.pop();

    // Print the stack again
    std::cout << "Stack after popping: ";
    stack.print();

    // Check if the stack is empty
    std::cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    // Display the size of the stack
    std::cout << "Size of the stack: " << stack.size() << std::endl;

    // Clear the stack
    std::cout << "Clearing the stack..." << std::endl;
    stack.clear();

    // Check if the stack is empty after clearing
    std::cout << "Is the stack empty after clearing? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0; 
}