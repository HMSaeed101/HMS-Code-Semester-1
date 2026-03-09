// A teacher wants to sort student marks for analysis.
// Write a program that:
// • Takes marks of students in an array
// • Passes the array to a function
// • The function sorts the array in ascending order
// • Displays the sorted result

#include <iostream>
using namespace std;
void sort_arr(int arr[], int size);
int main()
{
    int size;
    cout << "Total Number of Students : ";
    cin >> size;

    int marks[size];
    cout << "Enter Marks of 5 Students.\n";
    for(int i=0; i<size; i++)
    {
        cout << "Student " << i+1 << ": ";
        cin >> marks[i];
    }
    sort_arr(marks, size);
}

void sort_arr(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    cout << "Sorted Array.\n";
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " " << endl;
    }
}