
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream readfile("2/Students.txt");
    
    cout << "\t\tStudents Data File \n";
    string line;
    while (getline(readfile, line))
    {
        cout << line << endl;
    }

}
