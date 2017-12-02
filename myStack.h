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
  //               terminates; otherwise, the top element
  //               of the stack is returned.
                                   
  void top();
  //Function to remove the top element of the stack.
  //Precondition: The stack exists and is not empty.
  //Postcondition: The stack is changed and the top
  //               element is removed from the stack.
                                   
  stackType(int stackSize = 100);
  //Constructor
  //Creates an array of the size of the stackSize to hold the
  //stack elements. The default stack size is 100.
  //Postcondition: The variable list contains the base
  //               address of the array; stackTop = 0; and
  //               maxStackSize = stackSize.
                                   
  stackType(const stackType<Type>& otherStack);
  //Copy constructor
                                   
  ~stackType();
  //destructor
  //Removes all the elements from the stack.
  //Postcondition: The array (list) holding the stack
  //               elements is deleted.
                                   
private:
  int maxStackSize;                 //variable to store the maximum stack size
  int stackTop;                     //variable to point to the top of the stack
  Type *list;                       //pointer to the array that holds the stack elements
  void copyStack(const stackType<Type>& otherStack);
  //Function to make a copy of the stack.
  //Postcondition: A copy of otherStack is created and
  //               assigned to this stack.
                                   
  template<class Type>
  void stackType<Type>::initializeStack()
  {
    stackTop = 0;    
  }
                                   
  template<class Type>
  void stackType<Type>::destroyStack()
  {
    stackTop = 0;
  }  
                                   
  template<class Type>
  bool stackType<Type>::isEmptyStack()
  {
    return (stackTop == 0);
  }
                                   
  template<class Type>
  bool stackType<Type>::isFullStack()
  {
    return (stackTop == maxStackSize);
  }
                                   
  template<class Type>
  void stackType<Type>::push(const Type& newItem)
  {
    if(!isFullStack())
    {
      list[stackTop] = newItem;
    }
    else
      cout << "Cannot add to a full stack." << endl;
  }  
                                     
  template<class Type>
  Type stackType<Type>::top()
  {
    assert(stackTop != 0);
    
    return list[stackTop -1];
  }
                                   
template<class Type>
void stackType<Type>::pop()
{
  if(!isEmptyStack())
      stackTop--;
  else
      cout << "Cannot remove from an empty stack." << endl;
}  
                                   
template<class Type>
void stackType<Type>::copyStack(const stackType<Type>& otherStack)
{
  delete [] list;
  maxStackSize = otherStack.maxStackSize;
  stackTop = otherStack.stackTop;
     
  list = new Type[maxStackSize];
  assert(list != NULL);
     
  for(int j = 0; j < stackTop; j++)
       list[j] = otherStack.list[j];
}  
     
//constructor
template<class Type>
stackType<Type>::stackType(int stackSize)
{
  if(stackSize <= 0)
  {
    cout << "The size of the array to hold the stack must be positive." << endl;
    cout << "Creating an array of size 100." << endl;
    maxStackSize = 100;
  }
  else
    maxStackSize = stackSize;
  
  stackTop = 0;
  list = new Type[maxStackSize];
  
  assert(list != NULL);
}  
                                     
                                     
                                   
};                                   
#endif
