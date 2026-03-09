/*
Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives
Input Format
Input will contain four integers -  , one per line.
Output Format
Return the greatest of the four integers.
*/

#include <iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d);
int main()
{
    int nums[4] = {};
    cout << "Enter four Integers : \n";
    for(int i=0; i<4; i++)
    {
        cout << "# " << i+1 << " : " ;
        cin >> nums[i];
    }
    int max = max_of_four(nums[0], nums[1], nums[2], nums[3]);
    cout << "Maximum of these four integers is : " << max ;
}


int max_of_four(int a, int b, int c, int d)
{
    int largest = a;
    if (largest < b)
    {
        largest = b;
    }
    if (largest < c)
    {
        largest = c;
    }
    if (largest < d)
    {
        largest = d;
    }
    return largest;
}