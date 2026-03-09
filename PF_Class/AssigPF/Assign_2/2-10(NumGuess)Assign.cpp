// asks the user to enter a number between 1 and 100. Use a do-while loop to keep asking until a valid number is entered
// Number Guessing Game
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
     int entry, counter=0;
     srand(time(0));
     int number = rand() % 100 + 1;
     do
     {
          cout << "\n\nGuess the number between 1-100.";
          cin >> entry;

          // Checking input vaidity
          if (entry>100 || entry<1)
          {
               cout << "?? ERROR ?? \nEnter number within range of 1-100.";
               continue;      //controlled skip, not stop. Stop and says to check the condition again without going any forward. LOOPS 
          }

          // Closeness 
          if(abs(entry-number)>50)
          {cout << "Bad Guess";}

          else if(abs(entry-number)>20)
          {cout << "Not so Close.";}

          else if(abs(entry-number)>10)
          {cout << "Very Close.";}

          else if(abs(entry-number)>0)
          {cout << "Very Very Very Close.";}

          // Relative Order
          if(entry>number)
          {cout << "\nGuess Lower.";}
          else if(entry<number)
          {cout << "\nGuess Higher.";}

          counter++;
     }
     while(entry!=number);

     cout << "\n\t!!!CONGRATULATIONS!!! You guessed it right in " << counter-1 << " attempts.\n";
     cout << "\t____________________________";
     cout << endl << "\tNumber : " << number << endl;
     cout << "\t____________________________";
} 