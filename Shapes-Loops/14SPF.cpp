// Right triangle increasing and decreasing

#include <iostream>
using namespace std;
int main()
{
     cout << "_________________________\n";

     for (int i=1; i<=10; i++)
     {
          for(int j=1; j<=i; j++)
          {
               cout << " * ";
          }
     cout << endl;
     }

     cout << "_________________________\n\n";

     for (int i=10; i>0; i--)
     {
          for(int j=1; j<=i; j++)
          {
               cout << " * ";
          }
     cout << endl;
     }

     cout << "_________________________\n";

}