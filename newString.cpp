//Implementation file newString.cpp
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cassert>
#include "newString.h"

using namespace std;

//Constructor; conversion from the char string to newString
newString::newString(const char *str);
{
  strLength = strlen(str);
  strPtr = new char[strlength +1];                 //Allocate memory to store
                                                   //the char string
  assert(strPtr != NULL);
  strcpy(strPtr, str);                             //Copy the string into strPtr
}

//Default constructor to store the null string
newString::newString()
{
  strLength = 0;
  strPtr = new char[1];
  assert(strPtr != NULL);
  strcpy(strPtr, "");
}

//Copy constructor
newString::newString(const newString& rightStr)
{
  strLength = rightStr.strLength;
  strPtr = new char[strLength + 1];
  assert( strPtr != NULL);
  strcpy(strPtr, rightStr.strPtr);
}

//Destructor
newString::~newString()
{
  delete [] strPtr;
}

//Overload the assignment operator
const newString& newString::operator=(const newString& rightString)
{
  if(this != &rightStr)              //avoid self-copy
  {
    delete [] = strPtr;
    strLength = right.strLength;
    strPtr = new char[strLength + 1];
    assert(strPtr != NULL);
    strcpy(strPtr, right.strPtr);
  }
  return *this;
}

char& newString::operator[] (int index)
{
  assert(0 <= index && index < strLength);
  return strPtr[index];
}

const char& newString::operator[] (int index) const
{
  assert(0 <= index && index < strLength);
  return strPtr[index];
}

//Overload the relational operators
bool newString::operator==(const newString& rightStr) const
{
  return (strcmp(strPtr, rightStr.strPtr) == 0);
}

bool newString::operator<(const newString& rightStr) const
{
  return (strcmp(strPtr, rightStr.strPtr) < 0);
}

bool newString::operator<=(const newString& rightStr) const
{
  return (strcmp(strPtr, rightStr.strPtr) <= 0);
}

bool newString::operator>(const newString& rightStr) const
{
  return (strcmp(strPtr, rightStr.strPtr) > 0);
}

bool newString::operator>=(const newString& rightStr) const
{
  return (strcmp(strPtr, rightStr.strPtr) >= 0);
}

bool newString::operator!=(const newString& rightStr) const
{
  return (strcmp(strPtr, rightStr.strPtr) != 0);
}

//Overload the stream insertion operator <<
ostream& operator<<(ostream& object, const newString& str)
{
  osObject << str.strPtr;
  return osObject;
}

//Overload the stream extraction operator >>
istream& operator>>(istream& isObject, newString& str)
{
  char temp[81];
  
  isObject>>setw(81)>>temp;
  str = temp;
  return isObject;
}
