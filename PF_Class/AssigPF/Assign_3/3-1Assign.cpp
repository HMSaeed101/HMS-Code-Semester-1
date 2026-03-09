// to find the sum and average of one dimensional integer array
#include <iostream>
using namespace std;
int main()
{
    int entry, sum=0;
    cout << "Enter size of array : ";
    cin >> entry;

    int arr[entry]={};
    cout << "Enter Integers for array.\n";

    // Array Traversal Entry
    for(int i=0; i<entry; i++)
    {
        cout << "# " << i+1 << " : ";
        cin >> arr[i];
    }

    // Sum of Elements of Array
    for(int i=0; i<entry; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of Array Elements : " << sum << endl;

    // Average of Array Elements
    float avg = sum/entry;
    cout << "Average : "<< avg;
}