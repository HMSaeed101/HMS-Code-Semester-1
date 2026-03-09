// Password Guessing within three wrong tries (Using if-else, For loops)
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
     int input, password=6348855;

     // Looping for Input Values Checking
     for( int guess=3 ; guess>0 ; guess--)
     {
          cout << "\n\n\tEnter the Numeric Password : ";
          cin >> input;

          if(input==password)
          {
               cout << "\n\t !!!___ CORRECT PASSWORD ___!!!";
               cout << "\n____________________________________";
               exit(0);
          }

          else 
          {
               cout << "\t !!!___ WRONG PASSWORD ___!!!\n";
               cout << " Try again\n Only " << guess-1 << " Tries left.\n Be Careful.\n";
               cout << "____________________________________";
               
               if(guess==0)
               {cout << "\n\tBetter Luck Next Time. ";}
          }
     }

}