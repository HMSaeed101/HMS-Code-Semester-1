// fill the entire screen with diamond and heart
// The ASCII value for heart is 3 and that of diamond is 4

#include <iostream>
using namespace std;
int main()
{
     for(int i=1; i<=200; i++)
     {
          cout << char(3);
          cout << char(4);
          
          if( i % 10 == 0 )
               {cout << endl;}
     }
}