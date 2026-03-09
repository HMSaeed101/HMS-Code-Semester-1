/*
    1. Sorting (Bubble_Sort) Arrays
    2. Merging Arrays
*/

#include <iostream>
using namespace std;
void merge_array(int arr_one[], int size_one, int arr_two[], int size_two, int new_arr[]);
void Bubble_sort_array(int arr[], int size_new);
double find_median(int arr[], int size);
int main()
{
    int size_one;
    cout << "Enter size of first array (>=1): ";
    cin >> size_one;
    int arr_one[size_one] = {};
    cout << "Enter Integers.\n";
    for(int i=0; i<size_one; i++)
    {
        cout << "# " << i+1 << " : ";
        cin >> arr_one[i];
    }
    cout << "______________________________________\n";
    int size_two;
    cout << "Enter size of second array (>=1): ";
    cin >> size_two;
    int arr_two[size_two] = {};
    cout << "Enter Integers.\n";
    for(int i=0; i<size_two; i++)
    {
        cout << "# " << i+1 << " : ";
        cin >> arr_two[i];
    }

    int size_new = size_one + size_two ;
    int new_arr[ size_new ];

    merge_array(arr_one, size_one, arr_two, size_two, new_arr);

    Bubble_sort_array(new_arr, size_new);

    double median = find_median(new_arr, size_new);
    cout << "Median of merged sorted array: " << median << endl;


}


void Bubble_sort_array(int arr[], int size)
{
    bool sorted;

    for(int i=0; i<size-1 ; i++) //For Passes
    {
        int temp;
        sorted = true;
        for(int j=0; j<size-1-i; j++) // For adjacent Comparisons 
        {
            if(arr[j] > arr[j+1])
            {
                // swap (arr[j], arr[j+1])
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        sorted = false;
    }

    cout << "____________Sorted Array____________\n";
    for(int i=0; i<size; i++)
    {
        cout << "# " << i+1 << " : ";
        cout << arr[i] << endl;
    }
}

void merge_array(int arr_one[], int size_one, int arr_two[], int size_two, int new_arr[])
{
    int i=0, j=0, k=0;
    // Compare & put smaller first when both arrays have elements
    while( i<size_one && j<size_two)
    {
        if( arr_one[i] <= arr_two[j] )
        {
            new_arr[k++] = arr_one[i++];
        }
        else
        {
            new_arr[k++] = arr_two[j++];
        }
    }
    while( i<size_one )
    {
        new_arr[k++] = arr_one[i++];
    }
    while( j<size_one )
    {
        new_arr[k++] = arr_two[j++];
    }

    cout << "_______________Merged Array_______________\n";
    for (int k = 0; k < size_one + size_two; k++)
    {
        cout << "# " << k+1 << " : ";
        cout << new_arr[k+1] << endl;
    }
    
}

double find_median(int arr[], int size) 
{
    if (size % 2 == 0) 
    {
        return (arr[size/2 - 1] + arr[size/2]) / 2.0;
    } 
    else 
    {
        return arr[size/2];
    }
}
