// Overtime Pay for Employess
#include <iostream>
using namespace std;
int main()
{
     int i, extra, amount, hours;
     int total = 0;
     for (i=1; i<=5; i++)
     {
          cout << "\n Enter total hours Emp " << i << " worked for : ";
          cin >> hours;
          if (hours>40)
               {
                    extra = hours - 40;
                    amount = extra * 12;
                    cout << "Overtime Pay for Emp # " << i << " is " << amount << " Rupees\n ";
                    cout << "_____________________________________\n";
                    total = total + amount;
               }
          else
          {cout << " ____ No Overtime Worked ___ \n";}
     }
     cout << "\n Total Overtime Pay : " << total << " Rupees \n ";
     return 0;
}