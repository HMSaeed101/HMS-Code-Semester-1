// program that generates a random number between 1 and 10. Use a do-while loop to let the user guess until they get it right. 
//  Example: 
//  Guess a number between 1 and 10: 5 
//  Too high! Try again. 
//  Guess a number between 1 and 10: 2 
//  Too low! Try again. 
//  Guess a number between 1 and 10: 3 
//  Congratulations! You guessed it right! 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
     // time(0) ensures a new random each time code runs
     srand(time(0));
     /* Making that random num to 1-10 
     remainder for div by 10 always gives 1-9
     then add +1 for making the range 1-10*/
     int num = rand() % 10 + 1;  
     
     int entry;
     do
     {
          cout << "Guess the Number between 1-10.";
          cin >> entry;

          if(abs(entry-num)==0)
          {
               break;
          }
          if(abs(entry-num)<=3)
          {
               cout << "Very Very Close." << endl;
          }
          else if(abs(entry-num)<=6)
          {
               cout << "Close enough." << endl;
          }
     }
     while(entry!=num);

     cout << "\nYOU guessed it Right.";
}