// Inverted Triangle
#include <iostream>
using namespace std;
int main()
{
     for(int i=10 ; i>0 ; i--)
     {
          for(int j=10 ; j>0 ; j--)
          {
               if ( j<i )
               {cout << " * ";}

               else {cout << "   ";}
          }
     cout << endl;
     }
}
