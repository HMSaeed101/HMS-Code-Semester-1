// factorial of a number
#include <iostream>
using namespace std;
int main()
{
     int num , fact=1 ;
     cout << "Enter any number.";
     cin >> num;

     for(int i=1; i<=num ; i++)
     {
          fact = fact * i;
     }
     cout << "factorial : " << fact;
}