/* 
Binary Searching finding median without merging arrays

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays without merging them.
*/

#include <iostream>
#include <climits>      // for using INT_MIN & INT_MAX
using namespace std;

double Median_Sort_Arr(int nums1[], int size1, int nums2[], int size2);
int main() 
{
    int nums1[5] = {};
    cout << "Integers for first array.\n";
    for (int _=0; _<5; _++)
    {
        cout << "# " << _+1 << " : " ;
        cin >> nums1[_];
    }
    cout << "Integers for Second array.\n";
    int nums2[5] = {};
    for (int _=0; _<5; _++)
    {
        cout << "# " << _+1 << " : " ;
        cin >> nums2[_];
    }

    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    double median = Median_Sort_Arr(nums1, size1, nums2, size2);
    cout << "Median is: " << median << endl;

    return 0;
}

double Median_Sort_Arr(int nums1[], int size1, int nums2[], int size2) 
{
    // Ensure nums1 is the smaller array
    if (size1 > size2) 
    {
        return Median_Sort_Arr(nums2, size2, nums1, size1);
    }

    int low = 0, high = size1;

    while (low <= high) 
    {
        int part1 = (low + high) / 2;
        int part2 = (size1 + size2 + 1) / 2 - part1;

        int maxLeft1, minRight1, maxLeft2, minRight2;

        // For nums1
        if (part1 == 0)
            maxLeft1 = INT_MIN;
        else
            maxLeft1 = nums1[part1 - 1];

        if (part1 == size1)
            minRight1 = INT_MAX;
        else
            minRight1 = nums1[part1];

        // For nums2
        if (part2 == 0)
            maxLeft2 = INT_MIN;
        else
            maxLeft2 = nums2[part2 - 1];

        if (part2 == size2)
            minRight2 = INT_MAX;
        else
            minRight2 = nums2[part2];

        // Check if correct partition
        if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) 
        {
            if ((size1 + size2) % 2 == 0) 
            {
                return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
            } 
            else 
            {
                return max(maxLeft1, maxLeft2);
            }
        } 
        else if (maxLeft1 > minRight2) 
        {
            high = part1 - 1;
        } 
        else 
        {
            low = part1 + 1;
        }
    }
    return -1;
}
