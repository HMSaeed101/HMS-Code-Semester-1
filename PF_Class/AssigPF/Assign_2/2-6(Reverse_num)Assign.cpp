// To reverse the digits of a number entered by the user (While loop)
#include <iostream>
using namespace std;
int main()
{
     int num, rev=0, temp;
     cout << "Enter any Number :";
     cin >> num;

     while( num!=0 )
     {
          temp = num % 10; //Last digit
          rev = rev * 10 + temp;
          num = num / 10;
     }
     cout << "Reversed Number : " << rev;
}