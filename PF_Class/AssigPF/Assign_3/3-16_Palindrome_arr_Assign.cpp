// Write a function void reverseArray(int arr[], int size) that reverses an array in-place
// Then write another function bool isPalindrome(int arr[], int size) that checks if an array is a palindrome by using the reverse function concept
#include <iostream>
using namespace std;
void reverseArray(int arr[], int size);
bool isPalindrome(int arr[], int size);
int main()
{
    int size;
    cout << "Enter size of array (>=1): ";
    cin >> size;
    int arr[size];
    cout << "Enter Integers.\n";
    for(int i=0; i<size; i++)
    {
        cout << "# " << i+1 << " : ";
        cin >> arr[i];
    }
    
    bool pal = isPalindrome(arr,size);
    if(pal)     {cout << "Palindrome\n";}
    else        {cout << "NOT a Palindrome\n";}

    reverseArray(arr, size);

    cout << "Reversed Array\n";
    for(int i=0; i<size; i++)
    {
        cout << "# " << i+1 << " : ";
        cout << arr[i] << endl;
    }
}

void reverseArray(int arr[], int size)
{
    int temp;
    for(int i=0; i<(size/2); i++)
    {
        temp = arr[i]; 
        arr[i] = arr[(size-1)-i];
        arr[(size-1)-i] = temp;
    }
}
bool isPalindrome(int arr[], int size)
{
    for(int i=0; i<(size/2); i++)
    {
        if(arr[i] != arr[(size-1)-i])
        {
            return false;
        }
    }
    return true;
}