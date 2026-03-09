// Write a program to take input numbers till the user wants and at the end it should display the count of positive, negative and zeros entered
#include <iostream>
using namespace std;
int main()
{
     int pos=-1, neg=0, zero=0;
     int num;
     cout << "To Stop Entering Numbers just type 999\n";
     do
     {
          cout << "Write any Number : ";
          cin >> num;

          if(num > 0)
               {    pos++   ;}
          if(num < 0)
               {    neg++     ;}
          if(num == 0)
          {    zero++    ;}
          
     }
     while(num!=999);
     cout << "___________________________________\n\n";
     cout << "Positive Numbers = " << pos << endl;
     cout << "Negative Numbers = " << neg << endl;
     cout << "Zeros = " << zero << endl;
}