//  to separate even & odd nums in an array of integers. Put all even nums first, & then odd nums
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array (>=1): ";
    cin >> size;
    int arr[size] = {};
    int new_arr[size] = {};
    cout << "Enter Integers.\n";
    for(int i=0; i<size; i++)
    {
        cout << "# " << i+1 << " : ";
        cin >> arr[i];
    }

    // Finding Evens
    int counter=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            new_arr[counter] = arr[i]; 
            counter++;
        }
    }

    // Finding Odds
    for(int i=0; i<size; i++)
    {
        if(arr[i] % 2 != 0)
        {
            new_arr[counter] = arr[i];
            counter++;
        }
    }

    // New Updated Array
    cout << "New Array\n";
    for(int i=0; i<size; i++)
    {
        cout << "# " << i+1 << " : ";
        cout << new_arr[i] << endl;
    }

}