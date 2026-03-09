// Multiplication Table (using for Loops)
// Saeed 25-CS-05
#include <iostream>
using namespace std;
int main()
{
     int num, table;
     cout << "Enter the Number : ";
     cin >> num;
     for (int i=1 ; i<=10; i++)
     {
          table = num * i;
          cout << num << " x " << i << " = " <<  table << "  \n";
     }
}