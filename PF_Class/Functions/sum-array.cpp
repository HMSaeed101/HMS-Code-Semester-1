// Create a function that returns the sum of elements of an array. Do not pass the array size globally, pass it properly as a parameter
#include <iostream>
using namespace std;
// Array declaration
int sum_arr( int array[], int size );
// Main Program Function
int main()
{
     int arr[5];
     cout << "Enter elements of Array of size 5 : \n";
     for(int i=0; i<5; i++)
     {
          cout << "\tElement " << i+1 << " : ";
          cin >> arr[i];
     }
     int size = sizeof(arr)/sizeof(arr[0]);

     int sum = sum_arr(arr, size);
     cout << "\n\tSum of array : " << sum;
}
// Adding Array Function
int sum_arr( int array[], int size )
{
     int sum=0;
     // Array traversal addition
     for(int i=0; i<size ; i++ )
     {
          sum = sum + array[i]; 
     }
     return sum ;
}