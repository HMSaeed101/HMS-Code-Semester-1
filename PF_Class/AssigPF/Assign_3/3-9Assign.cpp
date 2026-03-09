// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may not use the same element twice

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array (>=1) : ";
    cin >> size;
    int arr[size]={} ;
    for (int i=0; i<size; i++)
    {
        cout << "# " << i << " : " ;
        cin >> arr[i];
    }

    // Input Target
    int target ;
    cout << "Now enter the target value : ";
    cin >> target ;


    // Addition Combination for each element to each one
    
    // First Element 
    for(int i=0; i<size; i++)
    {

        // Second Element 
        for(int j=i+1 ; j<size; j++)
        {

            if( arr[i] + arr[j] == target)
            {
                cout << "Index Values of Elements that add up to target value. " << endl;
                cout << "[ " << i << " , " << j << " ]" << endl;
                return 0;
            }
        }

    }

}