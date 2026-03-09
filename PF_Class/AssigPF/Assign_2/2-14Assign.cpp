// Sum of Even Numbers up to N
#include <iostream>
using namespace std;
int main()
{
     int num, sum=0;
     cout << "Enter any Number.";
     cin >> num;

     for(int i=0; i<=num ; i=i+2)
     {
          sum = sum + i;
     }
     cout << sum;
}