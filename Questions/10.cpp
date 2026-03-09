// Print out all Armstrong numbers (If sum of cubes of each digit of the number is equal to the number itself) between 1-500
// For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

#include <iostream>
using namespace std;
int main()
{
     for (int num=1 ; num<=500 ; num++)
     {
          int temp = num;
          int sum = 0;
          while(temp!=0)
          {
               int digit = temp % 10; 
               sum = sum + (digit * digit * digit);
               temp /= 10;
          }
          if(sum==num)
          {
               cout << num << " ";
          }
     }

     return 0;
}