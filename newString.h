//Header file newString.h
#ifndef H_newString
#define H_newString
#include <iostream>

using namespace std;

class newString
{

  //Overload the stream insertion and extraction operator
  friend ostream& operator<<(ostream&, const newString&);
  friend istream& operator>>(istream&, newString&);
  
public:
  //Overload the assign operator
  const newString& operator=(const newString&);
  //Constructor; conversion from the char string
  newString(const char *);
  //Default constructor to initialize the string to NULL
  newString();
  //Copy constructor
  newString(const newString&);
  //Desctructor
  ~newString();

  char& operator[] (int);
  const char& operator[] (int) const;
  
  //Overload the relational operators
  bool operator==(const newString&) const;
  bool operator!=(const newString&) const;
  bool operator<=(const newString&) const;
  bool operator<(const newString&) const;
  bool operator>=(const newString&) const;
  bool operator>(const newString&) const;
 private:
  char *strPtr;                   //Pointer to the char array
                                  //that holds the string
  int strLength;                  //data member to store the length
                                  //of the string
};
#endif
