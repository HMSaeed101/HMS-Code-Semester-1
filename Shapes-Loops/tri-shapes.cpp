// Triangle Shapes
// Increasing, Decreasing

#include <iostream>
using namespace std;
int main()
{
     int num;
     cout << "Enter any Number : ";
     cin >> num;

     cout << "_______________________\n\n";

     // Increasing Triangle
     for(int i=1; i<num; i++)
     {    for(int j=1; j<=i; j++)
          {cout << " # ";}
     cout << endl;
     }

     cout << "________________________\n\n";

     // Decreasing Triangle
     for(int i=num; i>0; i--)
     {    for(int j=i-1; j>0; j--)
          {cout << " # ";}
     cout << endl;
     }

     cout << "________________________\n\n";

     for(int i=num; i>0; i--)
     {
         for(int j=0; j<i; j++)
          {cout << " # ";}
     cout << endl;
     }

}