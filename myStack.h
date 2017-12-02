#ifndef H_StackType
#define H_StackType

#include <iostream>
#include <cassert>

using namespace std;

template<class Type>
class stackType
{
public:
  const stackType<Type>& operator=(const stackType<Type>&;
  //Overload the assignment operator
  void InitializeStack();
  //Function to initialize the stack to an empty state.
  //Postcondition: stackTop = 0
  bool isEmptyStack();
  //Function to determine whether the stack is empty.
  //Postcondition: Returns true if the stack is empty;
  //               otherwise, returns false.                  
                                   
  bool isFullStack();
  //Funtion to determine whether a the stack is full.
  //Postcondition: Returns true if the stack is full;
  //               otherwise, returns false.
  void destroyStack();
  //Function to remove all the elements from the stack.                                 
                                   
  void push(const Type& newItem);
  //Function to add newItem to the stack.
  //Precondition: The stack sxists and is not full.
  //Postcondition: The stack is changed and newItem
  //               is added to the top of the stack.
                                   
  Type top();                                 
  //Function to return the top element of the stack.
  //Precondition: The stack exists and is not empty.                                 
  //Postcondition: If the stack is empty, the program                                 
  //               terminates;                                   
#endif
