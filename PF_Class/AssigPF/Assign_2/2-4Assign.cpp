// To calculate the sum of all natural numbers from 1 to num (While loop)
#include <iostream>
using namespace std;
int main()
{
     int num;
     cout << "Enter any Number : ";
     cin >> num;

     // going from num to 1 adding all (While loop)
     int i = num;
     int sum = 0;
     while(i>=1)
     {
          sum = sum + i ;
          i--;
     }
     cout << sum << endl;

     // going from 1 to num adding all (While Loop)
     int j=1;
     int add = 0;
     while (j<=num)
     {
          add = add + j;
          j++;
     }
     cout << add << endl;

}