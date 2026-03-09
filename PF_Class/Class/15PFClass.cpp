// Calculating Pay for given Time

#include <iostream>
using namespace std;
int main()
{
     for(;;)
     {    int tmin;
          cout << "\n \n Enter Time in Minutes :";
          cin >> tmin;

          float hour = tmin/60;

          int rph;
          cout << "\n Rate per Hour : ";
          cin >> rph;

          int Total_pay = hour * rph;

          cout << "\n Total Pay = " << Total_pay << " Rupees";
          cout << "\n___________________________________________________";
     }
}