// Checking if the number is even/odd, positive/negative/zero

#include <iostream>
using namespace std;
int main()
{
     for(;;)
     {
     int a;
     cout << "___________________________________________\n\n";
     cout << "\tEnter any Number : ";
     cin >> a;
     cout << endl;

     if (a==0) {cout << "\t   ZERO\n";}
     
     else {
          
          if (a<0) {cout << "\t   Negative\n";}
          else if (a>0) {cout << "\t   Positive\n";}
          
          if(a%2 == 0){cout << "\t   Even\n";}
          else {cout << "\t   ODD\n";};}
     }
return 0;
}