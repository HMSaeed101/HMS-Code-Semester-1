// Hollow Right Angle Triangle

#include <iostream>
using namespace std;
int main()
{
     for (int i=1; i<10 ; i++)
     {
          for (int j=1 ; j<10 ; j++)
          {
               if(i==j || i==9 || j==1)       {cout << " # ";}
               else if(i==9)        {cout << " # ";}    // Last Line
               else if(i==j)   {cout << " # ";}        // Principal Diagonal 
               else if(j==1)   {cout << " # ";}        // First Vetical Line
               else {cout << "   ";}
          }
     cout << endl;
     }
}