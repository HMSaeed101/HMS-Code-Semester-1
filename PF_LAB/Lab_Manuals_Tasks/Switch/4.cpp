// Lab Task 4
// Saeed 25-CS-05

#include <iostream>
using namespace std;
int main()
{
     int num;
     cout << "Enter any Number.";
     cin >> num;

     switch(num)
     {
          case 1:
          cout << "Primary Education";
          break;

          case 2:
          cout << "Middle School";
          break;

          case 3:
          cout << "High School";
          break;

          case 4:
          cout << "Undergraduate";
          break;

          case 5:
          cout << "Graduate";
          break;

          default:
          cout << "Try Again."; 
          break;
     }
}