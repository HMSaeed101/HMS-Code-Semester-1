// Checking if A Num Is Prime

#include <iostream>
using namespace std;
int main()
{
     int num;
     cout << "Enter any number : ";
     cin >> num;

     int i,j;
     for ( i=2 ; i<num ; i++)
               {    if ( num % i == 0)
                    {cout << "Not a Prime Number.\n";
                    exit(0);}
               }
     cout << num << " is a Prime Number.";
     cout << "\n________________________________";
     return 0;
}