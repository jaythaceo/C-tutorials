/* Reads a list of saleries and
 * marks the highest value
 */

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    vector<double> saleries;
    bool more = true;

    while(more) {

        double s;
        cout << "Please enter a salary, 0 to quit: ";
        cin >> s;
        if(s ==0)
            more = false;
        else
            saleries.push_back(s);
    }

    double highest = saleries[0];
    int i;

    for(i = 1; i < saleries.size(); i++)
        if(saleries[i] > highest)
            highest = saleries[i];

    for (i = 0; i < saleries.size(); i++) {
        if(saleries[i] == highest)
            cout << "highest value => ";
        cout << saleries[i] << "\n";
    }

    return 0;
}
