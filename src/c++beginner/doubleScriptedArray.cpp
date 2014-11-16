// Double scripted array
#include <iostream>
#include <iomanip>
using namespace std;

const int students = 3;
const int exams = 4;

int minimum();
int maximum();
double average();
void printArray;

int main(int argc, char const *argv[])
{
  int studentGrades[students][exams] =
  { {77,68,86,73},
    {29,87,89,78},
    {70,90,86,81} };


  cout << "The array is: ";
  printArray(studentGrades, students, exams);
  cout << "The lowest grade: " << minimum(studentGrades, students, exams)
  << "\nHighest grade: "
  << maximum(studentGrades, students, exams)
  << "\n";


  for (int person = 0; person < students; person++)
    cout <<"The average grade for student " << person << " is "
    << setiosflags(ios::fixed | ios::showpoint)
    << setprecision(2)
    << average(studentGrades[person], exams) << endl;


  return 0;
}

// Find the minimum grade
int minimum(int grades[][exam], int pupils, int tests)
{
  int lowGrade = 100;

  for (int i = 0; i < pupils; i++)

    for (int j = 0; j < tests; j++)

      if (grades[i][j] < lowGrade)

        lowGrade = grades[i][j];

  return lowGrade;
}

// Find the highGrade
int minimum(int grades[][exam], int pupils, int tests)
{
  int highGrade = 100;

  for (int i = 0; i < pupils; i++)

    for (int j = 0; j < tests; j++)

      if (grades[i][j] < highGrade)

        highGrade = grades[i][j];

  return highGrade;
}
