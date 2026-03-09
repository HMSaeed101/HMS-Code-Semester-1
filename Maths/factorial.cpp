// to find the factorial value of any number

#include <iostream>
using namespace std;
int main()
{
     int num, factorial;
     cout << "Enter any Number to Find it's Factorial : ";
     cin >> num;

     factorial = num;

     for(int i=num-1; i>0; i--)
     {factorial = factorial * i;}

     cout << "The factorial of " << num << " is " << factorial;
     return 0;
}