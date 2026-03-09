// Switch Statement

#include <iostream>
using namespace std;
int main()
{
     int num;
     cout << "Enter Any Number : ";
     cin >> num;

     switch(num % 2)
     {
          case 0:
          cout << "Even Number.";
          break;

          case 1:
          cout << "Odd Number.";
          break;
     }
}