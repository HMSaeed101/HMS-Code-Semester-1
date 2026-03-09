// Take the input n and generate this pattern
// if n = 5
//                          *
//                        * * *
//                      * * * * *
//                    * * * * * * *
//                  * * * * * * * * *
//                    * * * * * * *
//                      * * * * *
//                        * * *
//                          *

#include <iostream>
using namespace std;
int main()
{
     int num;
     cout << "Enter the size of Diamond : ";
     cin >> num;

// First half
for(int i=1 ; i<=num ; i++)
     {
          // Spaces
          /*Decreasing Right Angle Triangle*/
          for(int j=num-i ; j>=1 ; j-- )
          {
               cout << "  ";
          }
          // Chars
          /*Odd number increasing in each next line*/
          for(int j=1; j<=(i*2)-1 ; j++)
          {
               cout << "* ";
          }
     cout << endl;
     }

// Second half
for(int i=1 ; i<num ; i++)
     {
          // Spaces
          /*inc Right Angle Triangle*/
          for(int j=1 ; j<=i ; j++ )
          {
               cout << "  ";
          }
          // Chars
          /*Odd number dec in each next line*/
          for(int j=1; j<=((num-i)*2)-1 ; j++)
          {
               cout << "* ";
          }
     cout << endl;
     }
}