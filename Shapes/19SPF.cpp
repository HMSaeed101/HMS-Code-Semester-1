// Equilateral Triangle

#include <iostream>
using namespace std;
int main()
{
     cout << "Enter the size of Equilateral Triangle : ";
     int num;
     cin >> num;

     for(int i=1; i<=num; i++)
     {
          // Printing spaces
          for(int j=num ; j>=i ; j-- )
          {
               cout << "  ";
          }
          // Printing Character
          for(int k=1 ; k<=(2*i)-1 ; k++)
          {
               cout << " #";
          }
     cout << endl;
     }
}