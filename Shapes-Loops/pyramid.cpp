// Pyramid Shapes

#include <iostream>
using namespace std;
int main()
{
     char ch;
     int n;
     cout << "Enter any Character : ";
     cin >> ch;
     cout << "Enter any Number : ";
     cin >> n;

     cout << "____________________________\n" << endl ;

     for (int i=1 ; i<=n ; i++)
          {
               for (int j=1 ; j<=i ; j++)
               {cout << ch << "  ";}
          cout << endl;
          }

     for (int i=n ; i>0 ; i--)
          {
               for (int j=i-1 ; j>0 ; j--)
                    {cout << ch << "  ";}
          cout << endl;
          }

     cout << "____________________________\n\n";

     for (int i=1 ; i<=n ; i++) // For Each Line 
          {
               for (int j=n-i ; j>0 ; j--) // For adding spaces
                    {cout << "  ";}
                         
               for (int k=1 ; k<=i ; k++) // For adding Characters
                    {cout << ch << " ";}
          cout << endl;
          }

return 0;
}