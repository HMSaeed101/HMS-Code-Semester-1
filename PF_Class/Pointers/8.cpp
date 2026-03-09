// Write a program to find the largest element in an array using pointers only.
#include <iostream>
using namespace std;
int large(int* arr, int size);
int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];
    int* ptr = arr;
    for(int i=0; i<size ;i++)
    {
        cout << "Element # " << i+1 << " : ";
        cin >> *(ptr + i);
    }
    int result = large(arr, size);
    cout << result;
}
int large(int* arr, int size)
{
    int* ptr = arr;             //a pointer to first element of array
    int largest = *arr ;        //init largest to first element of arr
    for(int i=0; i<size; i++)
    {
        if(largest < *(ptr+i))
        {
            largest = *(ptr+i);
        }
    }
    return largest;
}