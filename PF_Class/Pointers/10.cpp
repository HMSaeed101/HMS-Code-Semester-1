// Write a program to reverse an array using pointer arithmetic
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};
    int* ptr = &arr[0];     // arr == &arr[0]
    // ptr boundaries for arrays 
    int* start = ptr ;
    int* end = ptr + (5-1) ;

    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        
        start++ ;
        end-- ;
    }

    cout << "Reversed Array\n";
    for(int i=0; i<5; i++)
    {
        cout << *(ptr+i) << endl;
    }
}