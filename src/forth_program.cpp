/* Algorithm to compute the average  */

#include <iostream>
using namespace std;

#define len 100    // defining the length of array

int main(int argc, const char * argv[])
{
    
  double array[len];    // array with len element
  double ave;
  double sum = 0;

  for (int i = 0; i < len; i++) {   // loop for computing average
        
    sum += array[i];      // adding elements of array
    ave = sum / len;      // division
        
  }
    
  cout << "Average: " << ave << endl;  // printing out average 
    
    
    // for windows users having problem
	// with terminal window closing 
	// just remove comment chars
	/* system("PAUSE"); */
  return 0;
}

