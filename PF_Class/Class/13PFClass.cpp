// Electricity Bill Calculation

#include <iostream>
using namespace std;
int main()
{
     for (;;)
     {
          float charges = 1000;
          float rate;
          float unit_cons;
          cout << "\n Enter Unit Consumed = ";
          cin >> unit_cons;

          if (unit_cons < 200){rate = 8;}

          else if (unit_cons < 300){rate = 15;}
          else if (unit_cons <= 400){rate = 25;}
          else {rate = 35;}

          float bill = rate * unit_cons;
          float tax = 0.1 * bill;
          float total_bill = bill + tax + charges;

          cout << "\n Your Total Bill is " << total_bill << " Rs-";
          cout << "\n_________________________________________________\n";
     }
}