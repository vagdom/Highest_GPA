//Program: Highest GPA

#include <iostream>
#include <iomanip>
#include <fstream>
#include "newString.h"
#include "myStack.h"

using namespace std;

int main()
{
  //Declare variables
  double GPA;
  double highestGPA;
  newString name;
  stackType<newString> stack(100);
  ifstream infile;
  
  infile.open("HighestGPAData.txt");
  
  if(!infile)
  {
    cout << "The input file does not exist. Program terminates!" << endl;
    return 1;
  }
  
  cout << fixed << showpoint << setprecision;
  
  infile >> GPA >> name;
  
  highestGPA = GPA;
  
  while(infile)
  {
    if(GPA > highestGPA)
    {
      stack.destroyStack();
      if(!stack.isFullStack())
        stack.push(name);
      
      highestGPA = GPA;
    }
    else
      if(GPA == highestGPA)
        if(!stack.isFullStack())
          stack.push(name);
        else
        {
          cout << "Stack overflow. Program terminates." << endl;
          return1;
        }
    infile >> GPA >> name;
    }
        
  }

  cout << "Highest GPA = " << highestGPA << endl;
  cout << "The students holding the highest GPA are:" << endl;

  while(!stack.isEmptyStack())
  {
    name = stack.top();
    stack.pop();
    cout << name << endl;
  }

cout << endl;

return 0;  
  
}
