#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void calculate () {

  fstream tfile;
  tfile.open("sample.txt", ios::in);
  char arr[20];
  char ch;
  int i, sum, n = 0;

  while(tfile) {

    tfile.get(ch);
    arr[i] = ch;
    i++;
    if ((ch == ' ') || (ch == '.'))
    {
      i--;
      sum = sum + i;
      i = 0;
      n++;
    }
  }

  cout << "Average word size is " << (sum/n);

}

int main(int argc, char const *argv[])
{
  calculate();
  return 0;
}
