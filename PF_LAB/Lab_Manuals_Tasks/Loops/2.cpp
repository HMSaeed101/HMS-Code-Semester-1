// Checking if A Num Is Prime
// Saeed 25-CS-05
#include <iostream>
using namespace std;
int main()
{
     int num;
     cout << "Enter any number : ";
     cin >> num;
     for (int i=2 ; i<num ; i++)
          {    if ( num % i == 0)
               {
                    cout << "Not a Prime Number.\n";
                    exit(0);
               }
          }
     cout << num << " is a Prime Number.";
     return 0;
}