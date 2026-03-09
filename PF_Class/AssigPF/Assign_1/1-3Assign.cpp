// Largest of Three Numbers
// Assignments

#include <iostream>
using namespace std;
int main()
{
     int a, b, c;
     cout << "Enter Three Numbers : ";
     cin >> a >> b >> c ;

     // Equal Numbers
     if (a==b && a==c) {cout << "\n All the Numbers are Equal";}

     // Unequal and Largest Number
     else if(a>=b && a>=c){
          if(a==b || a==c)    {cout << "\n Two Numbers are Equal and Largest";}
          else                {cout << "\n First Number is the Largest";}
     }

     else if(b>=a && b>=c){
          if (b==a || b==c)   {cout << "\n Two Numbers are Equal and Largest";}
          else                {cout << "\n 'Second' is the Largest Number";}
     }
          
     else if(c>=a && c>=b){
          if (c==a || c==b)   {cout << "\n Two Numbers are Equal and Largest";}
          else                {cout << "\n 'Third' is the Largest Number";}
     }
     return 0;
}