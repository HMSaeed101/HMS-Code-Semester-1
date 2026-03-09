#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    int record[5][3];
    for(int i = 0; i < 5; i++) 
    {
        cout << "Student " << i + 1 << endl;
        for(int j = 0; j < 3; j++) 
        {
            cout << "Enter marks of subject " << j + 1 << ": ";
            cin >> record[i][j];
        }
        cout << endl;
    }

    // For Printing Headings
    cout << "Sub1 \t Sub2 \t Sub3 \t \n";

    // Input Data Printing
    for(int i = 0; i < 5; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            cout << record[i][j] << "\t";
        }
        cout << endl;
    }
}
