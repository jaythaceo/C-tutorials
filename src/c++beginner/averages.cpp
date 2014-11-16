/* Algorithm to compute the average  */

#include <iostream>
using namespace std;


int main(int argc, const char * argv[])
{

  double array[3] = {23,43,56};    // array
  double ave;
  double sum = 0;

  for (int i = 0; i < 3; i++) {   // loop for computing average

    sum += array[i];      // adding elements of array
    ave = sum / 3;      // division

  }

  cout << "Average: " << ave << endl;  // printing out average

  // for windows users having problem
  // with terminal window closing
  // just remove comment chars
  /* system("PAUSE"); */
  return 0;
}

