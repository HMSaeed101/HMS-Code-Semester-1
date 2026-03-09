// Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order
#include <iostream>
using namespace std;
int main()
{
    int arr[10], rvrarr[10];
    cout << "Enter 10 integers.\n";
    for(int i=0; i<10; i++)
    {
        cout << "# " << i+1 << ": ";
        cin >> arr[i];
    }

    // Reverse Order Array
    for(int i=0; i<10; i++)
    {
        rvrarr[i] = arr[9-i];
    }

    cout << "\nReversed Array\n";
    for(int i=0; i<10; i++)
    {
        cout << "# " << i+1 << "  ";
        cout << rvrarr[i] << endl;
    }

}