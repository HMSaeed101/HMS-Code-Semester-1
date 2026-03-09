// Finding factorial (Using for Loops)

#include <iostream>
using namespace std;
int main()
{
     int fact=1;
     int num;
     cout << "Enter the Number to find its Factorial :";
     cin >> num;

     if (num==0)
     {
          cout << "The Factorial is 1 " ; 
     }
     else
     {
          for (int i=1; i<=num; i++)
          {
               fact *= i;
          }
     cout << "The Factorial is " << fact << endl;
     }
      
     return 0;
}