// Student Grading System
// Assignement

#include <iostream>
using namespace std;
int main()
{    for (;;)
          {
          int std_marks;
          cout << "\n Enter your marks (0 - 100): ";
          cin >> std_marks;

          if (std_marks < 0)   {cout << "Wrong Entry !!!"; return 0;} // return 0; For exiting the program here
          if (std_marks > 100) {cout << "Wrong Entry !!!"; return 0;} // return 0; For exiting the program here

          if (std_marks >= 90)
               {if (std_marks >= 95) {cout << "Grade A+";}
               else                  {cout << "Grade A";}}

          else if (std_marks >= 70)
               { if (std_marks >= 85) {cout << "Grade B+";}
               else                {cout << "Grade B";}}

          else if (std_marks >= 50)
               { if (std_marks >= 65) {cout << "Grade C+";}
               else                {cout << "Grade C";}}

          else { cout << "Grade F";}
          return 0;
          }
}