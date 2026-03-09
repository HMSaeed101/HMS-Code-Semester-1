// program to find the largest element of a given array of integers
#include <iostream>
using namespace std;
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
    // Finding Largest Integer
    int largest = arr[0];       // Linear Search
    for(int i=1; i<size; i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    cout << "\nLargest Integer : " << largest ;
}