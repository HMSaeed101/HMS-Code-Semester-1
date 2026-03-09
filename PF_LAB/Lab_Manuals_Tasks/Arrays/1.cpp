// Write a program that inputs ten odd values from the user. Calculate the sum and average of the elements and then print the sum and average on the screen
// Saeed 25-CS-05
// Lab 10 (1)
#include <iostream>
using namespace std;
int main()
{
     int num[10];
     int entry;
     cout << "Enter Ten odd Integers : \n";
     int i=0;
     while(i<10)
     {
          cout << "# " << i+1 << " : " ;
          cin >> entry;
          if( entry % 2 != 0 )
          {
               num[i] = entry;
               i++;
          }
          else
          {
               cout << "!!!This is NOT ODD Number!!!\n";
          }
     }

     // Calculating Sum
     int sum = 0;
     
     for(int i=0; i<10; i++)
     {
          // cout << "# " << i+1 << " : " << num[i] << endl;
          sum = sum + num[i];
     }
     int avg = sum / 10 ;

     cout << "\nSum : " << sum << endl << endl;
     cout << "Average : " << avg << endl << endl;
}