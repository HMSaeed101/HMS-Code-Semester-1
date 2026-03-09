// Grade Point Average GPA Calculator
// Assignments

#include <iostream>
using namespace std;
int main()
{
     float total = 500 ;
     float maths, eng, urdu, phy, chem;
     cout << " \nEnter your marks in Maths : ";
     cin >> maths;
     cout << " \nEnglish : ";
     cin >> eng;
     cout << " \nUrdu : ";
     cin >> urdu;
     cout << "\nPhysics : ";
     cin >> phy;
     cout << "\nChemistry : ";
     cin >> chem;

     float obt_total = eng + maths + urdu + phy + chem;
     
     float per = (obt_total / total) * 100;
     cout << "\n \n Your Total Marks are " << obt_total;
     cout << "\n \n Your Percentage is " << per << " % ";

     if        (per >= 90) {cout << "\n Grade A";}
     else if   (per >= 80) {cout << "\n Grade B";}
     else if   (per >= 70) {cout << "\n Grade C";}
     else if   (per >= 60) {cout << "\n Grade D";}
     else                  {cout << "\n Grade F";}

     return 0;
}