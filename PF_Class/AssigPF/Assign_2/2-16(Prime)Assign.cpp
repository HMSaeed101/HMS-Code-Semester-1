// Check Prime Number or not
#include <iostream>
using namespace std;
int main()
{
     int count=0, num, rem;
     cout << "Enter any number to check if its Prime.";
     cin >> num;

     for(int i=1; i<=num; i++)
     {
          rem = num % i;
          if(rem==0)
          {
               count++;
          }
     }
     if(count==2)
     {
          cout << "Prime Number.";
     }
     else{cout << "NOT a Prime Number.";}

}