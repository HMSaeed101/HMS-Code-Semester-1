// Write a program to produce the following output: (By Bilal Mamu)
//        1  2  3  4  5  6  7  6  5  4  3  2  1
//        1  2  3  4  5  6  _  6  5  4  3  2  1
//        1  2  3  4  5  _  _  _  5  4  3  2  1 
//        1  2  3  4  _  _  _  _  _  4  3  2  1
//        1  2  3  _  _  _  _  _  _  _  3  2  1 
//        1  2  _  _  _  _  _  _  _  _  _  2  1
//        1  _  _  _  _  _  _  _  _  _  _  _  1

#include <iostream>
using namespace std;
int main()
{
int num ;
cout << "Enter Any Number : ";
cin >> num ;

// Initialize to "1" after each "i" loop (row)
// Odd limit for spaces(dashes) loops
int g =1;

// ____________________________________________________________
// First Loop for basic rows

for(int i=num; i>0; i--)        // rows Dec from num to 1
{    

// _____________________________________________________________
// Second Loop for spaces (dashes)
// dashes to be odd (increase by 2)

     for(int j=1; j<=i; j++)    // inc from 1 to num
     {cout << j << " ";}

     if(i<num)
          {
               // Iterate through all of nums and making the limit to be odd (inc+2)
               for(int p=1; p<=g ; p=p+1)
               {cout << "--";}
               // limit to iterate until...
               g = g+2;
          }
// _______________________________________________________________
// Third Loop for reversing Numbers
// "m" taking equal to "i" to reverse from extreme
     for(int m=i ; m>0; m--)
     {
          // Only to Skip the double "first" row last num printing, not for other rows
          if(i==num)
          {
               if(m==1)
               {cout << " ";}

               else {cout << m-1 << " ";}
          }

     else {cout << m << " ";} 
     }

cout << endl ;
}
return 0;
}