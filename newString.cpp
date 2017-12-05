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

