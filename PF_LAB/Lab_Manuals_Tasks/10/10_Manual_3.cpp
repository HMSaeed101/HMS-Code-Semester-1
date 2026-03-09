// Write a program that inputs 10 no.s from the user in array and print the maximum value in array
// Saeed 25-CS-05
// Lab 10 (3)
#include <iostream>
using namespace std;
int main()
{
     int entry[10];
     for(int i=0; i<10; i++)
     {
          cout << "Enter the Values : ";
          cin >> entry[i];
     }

     int max = 0;
     for(int j=0; j<10; j++)
     {
          if( entry[j] > max )
          {
               max = entry[j];
          }
     }
     cout << "\n Max : " << max;
}