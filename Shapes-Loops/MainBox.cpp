// Square Shape Patterns

//  (i+j==10)          __  Secondary Diagonal 
//  (i==j)             __  Principle main Diagonal
//  (i==j || i+j==10)  __  X shape _ Combine first and second Diagonal
//  (i!=j)             __  All Except Main Diagonal
//  (j==9)             __  Border (Last Verticle Line)
//  (j==1)             __  Border (First Verticle Line)
//  (i==1)             __  Border (First Horizontal Line)  
//  (i==9)             __  Border (Last Horizontal Line)

// (i > j)             __  Lower-left triangle region
// (i < j)             __  Upper-right triangle region
// (i + j < 10)        __  Upper-left triangle region
// (i + j > 10)        __  Lower-right triangle region

// ( (i%2) ==0)        __  Pattern on even rows only
// ( (j%2) ==0)        __  Pattern on even columns only
// ( (i+j) %2 ==0)     __  Checker pattern
// (i==j+1 || j==i+1)  __  Thick diagonal band
               
// ((i==1) || (i==9) || (j==1) || (j==9))   Hollow box (all borders combined)


#include <iostream>
using namespace std;
int main()
{
  cout << endl;

  for(int i=1; i<10; i++)
  {
    for(int j=1; j<10; j++)

      {cout << i << j << "    ";}

  cout << endl << endl;
  
  }
}