// to reverse the element of an integer 1-D array
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    int arr[size]={};
    cout << "Enter Integers.\n";
    for(int i=0; i<size; i++)
    {
        cout << "# " << i+1 << " : ";
        cin >> arr[i];
    }
    // Reversing (Updating Index)
    int temp;
    for(int i=0; i<(size/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[(size-1)-i];
        arr[(size-1)-i] = temp;
    }
    cout << "\nReversed Array\n";
    for(int i=0; i<size; i++)
    {
        cout << "# " << i+1 << " : ";
        cout << arr[i] << endl;
    }
}