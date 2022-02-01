// stack.h
#ifndef STACK_H
#define STACK_H

class Stack { 
    int* end; 
    int* begin; 
    // also is the pointer to the array that stores the stack  

public:
    Stack();  
    Stack(const Stack& src); 
    void push(int val); 
    void pop(); 

    int top() {return *end;}
    int bottom(){return *begin;} 
};

#endif // STACK_H
