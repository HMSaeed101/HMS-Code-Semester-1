// To count the number of digits in a given integer (While loop)
#include <iostream>
using namespace std;
int main()
{
     int num, res, counter = 0;
     cout << "Enter any Number : ";
     cin >> num;

     while(num!=0)
     {
          res = num % 10; //Checking last digit
          num = num / 10; //Removing last digit
          if(res!=0)
          {
               counter++;
          }
     }
     cout << "Number of Digits = " << counter;
}