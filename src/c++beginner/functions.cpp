/** Seventh in the c++ series
** using a Function ********/

#include <iostream>
using namespace std;


int add(int x, int y){
  return x + y;
}

int main(int argc, char const *argv[])
{

  int number = 10;
  int number1 = 30;

  cout << "The two integers added are " << add(number, number1) << endl;


  return 0;
}
