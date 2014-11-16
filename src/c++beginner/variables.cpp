/*************************************
The second program... VARIABLES
**************************************/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int one; // integer variable
  float two; // floating point or real number
  const int x = 32; // constant int "cant change value"

  // adding value to the variables
  one = 55;
  two = 3.4;

  // printing variables to the screen
  cout << "The variable one = " << one << endl;
  cout << "The variable two = " << two << endl;
  cout << "The constant variable = " << x << endl;

  // for windows users having problem
  // with terminal window closing
  // just remove comment chars
  /* system("PAUSE"); */

  return 0;
}
