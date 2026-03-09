// Right angle Filled Triangle

#include <iostream>
using namespace std;
int main ()
{
     for(int i=1; i<10; i++)
     {
          for(int j=1 ; j<10; j++)
          {
               if (i==j || j==1 || i==9 || i>j)
               {cout << " * ";}
               else { cout << "   ";}
          }
     cout << endl;
     }
}
