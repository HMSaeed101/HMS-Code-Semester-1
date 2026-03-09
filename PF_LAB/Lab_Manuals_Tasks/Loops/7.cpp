// Lab Report 7 & 8 (3)
// find sum of series: 1/3+3/5+………97/99 (do while)

#include <iostream>
using namespace std;
int main()
{
     float a=1, b=3, sum;
     do
     {
          sum = sum + a/b;
          a = a + 2;
          b = b + 2;
     }
     while(a<=97 && b<=99);
     cout << "SUM = " << sum ;
}