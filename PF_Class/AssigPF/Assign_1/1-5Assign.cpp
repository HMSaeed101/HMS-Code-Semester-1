//Interest Calculator
// Assignments

#include <iostream>
using namespace std;
int main ()
{
     float prn, time, rate;
     cout << "\n Enter the Principle Amount : ";
     cin >> prn;

     cout << "\n Enter the Interest Rate % : ";
     cin >> rate;

     cout << "\n Enter the Time taken ( In Years ) : ";
     cin >> time;

     float interest = (prn * rate * time) / 100;
     cout << "\n Simple Interest = " << interest << " Rupees";
     
     float Total_amount = prn + interest;
     cout << "\n Total amount including the Interest = " << Total_amount << " Rupees"; 
}