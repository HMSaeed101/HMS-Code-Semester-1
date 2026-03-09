// Reversing array with pointers
#include <iostream>
using namespace std;
int main() 
{
    int arr[5];
    int* ptr = arr;
    for (int i = 0; i < 5; i++) 
    {
        cin >> *(ptr + i);
    }
    // Reverse using pointers
    // pointer boundaries for the reversal process 
    int* start = ptr;
    int* end = ptr + (5-1);
    while (start < end)
    {
        // swap
        int temp = *start;
        *start = *end;
        *end = temp;
        // updating
        start++;
        end--;
    }

    // Print reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}
