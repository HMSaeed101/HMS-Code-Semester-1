// Pattern on Even Rows/Columns

#include <iostream>
using namespace std;
int main()
{
     // Even Rows
     for (int i=1; i<10; i++)
     {
          for(int j=1; j<10; j++)
          {
               if (( i % 2 ) == 0)
               {cout << " * ";}
               else { cout << " # ";}
          }
     cout << endl;
     }

     cout << "______________________________________\n\n";

     // Even Columns
     for (int i=1; i<10; i++)
     {
          for(int j=1; j<10; j++)
          {
               if (( j % 2 ) == 0)
               {cout << " * ";}
               else { cout << " # ";}
          }
     cout << endl;
     }
}