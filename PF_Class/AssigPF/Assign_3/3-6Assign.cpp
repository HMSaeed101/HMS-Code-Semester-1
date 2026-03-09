// to find the most frequent element in an array of integers
#include <iostream>
using namespace std;
void freq_int(int arr[], int size);
int main()
{
    int size;
    cout << "Enter size of array (>=1): ";
    cin >> size;

    int arr[size]={};
    cout << "Enter Integers.\n";
    for(int i=0; i<size; i++)
    {
        cout << "# " << i+1 << " : ";
        cin >> arr[i];
    }
    cout << "____________________________________\n";

    freq_int(arr, size);
}

// Function most frequent Integer
void freq_int(int arr[], int size)
{
    int freq_num = arr[0];
    int large_count = 0;//outside for loop

    // Array Traversal for Element Checking
    for(int i=0; i<size; i++)
    {
        int count = 0;//this is inside for loop
       // Element count in array
       for(int j=0; j<size; j++)
       {
            if(arr[i]==arr[j])
            {
                count++;
            }
       }
        if ( count > large_count )
        {
            large_count = count;
            freq_num = arr[i];
        }
    }
    cout << "Most repeated integer here is " << freq_num << " repeated " << large_count << " times.";
}