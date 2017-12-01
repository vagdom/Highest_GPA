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
                                   
                                   
                                   
#endif
