// Largest Number of an array
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter size of array: ";
    int size;
    cin >> size;
    int array[size], key, i;

    // Taking Input in Array
    for(int j = 0; j < size; j++) {
        cout << "Enter " << j << " Element: ";
        cin >> array[j];
    }
    //Your entered array is
    for (int a = 0; a < size; a++) {
        cout << "Array[ " << a <<" ] = ";
        cout << array[a] << endl;
    }

    int maximum = array[0];
    for (i = 0; i < size; i++) {
        if(array[i] > maximum) {
            maximum = array[i];
        }
    }

    cout << "\n\nMaximum Number in array is: " << maximum;

    return 0;

}
