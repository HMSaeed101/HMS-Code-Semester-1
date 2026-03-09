// Grading System
// saeed 25-CS-05
#include <iostream>
using namespace std;
int main()
{
     int pf, ict, cal;
     cout << "Enter your marks in PF : ";
     cin >> pf;
     cout << "Enter your marks in ICT : ";
     cin >> ict;
     cout << "Enter your marks in Calculus : ";
     cin >> cal;

     float avg = (pf+ict+cal) / 3;
     cout << "Your Average Marks are " << avg << endl;

     if (avg > 80){cout << "     Grade A";}

     else if (avg > 50) 
          {if(avg <= 80){cout << "     Grade B";}}

     else if (avg > 33)
          {if (avg <= 50){cout << "    Grade C";}}

     else if (avg <= 33){cout << "     Grade F";}

     return 0;
}