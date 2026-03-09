// to swap first and last element of an integer 1-d array
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array (Greater than 3) : ";
    cin >> size;
    int arr[size]={};
    cout << "Enter Integers for array.\n";
    
    for(int i=0; i<size; i++)
    {
        cout << "# " << i+1 << " : ";
        cin >> arr[i];
    }

    int temp;
    temp = arr[0];
    arr[0] = arr[size-1];
    arr[size-1] = temp;

    cout << "Array 1\n";
    for(int i=0; i<size; i++)
    {
        cout << "# " << i+1 << " : ";
        cout << arr[i] << endl;
    }
}