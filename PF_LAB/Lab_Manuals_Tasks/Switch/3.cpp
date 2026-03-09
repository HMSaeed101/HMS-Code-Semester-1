// Lab Task 3
// Saeed 25-CS-05

#include <iostream>
using namespace std;
int main()
{
     int num;
     cout << "\nWhat's the Current Season.";
     cout << "\n1. Winter.";
     cout << "\n2. Spring.";
     cout << "\n3. Summer.";
     cout << "\n4. Fall." << endl;

     cin >> num;
     cout << "________________________________\n";

     switch(num)
     {
          case 1:
          cout << "Skying for Winter\n";
          break;

          case 2:
          cout << "Garden Walk\n";
          break;

          case 3:
          cout << "Swimming for Summer\n";
          break;

          case 4:
          cout << "Autumn Pics\n";
          break;

          default:
          cout << "TRY Again, with right values.\n";
          break;
     }
}
