// Write a program to produce the following output: (By ChatGPT Logic)
//        1  2  3  4  5  6  7  6  5  4  3  2  1
//        1  2  3  4  5  6  _  6  5  4  3  2  1
//        1  2  3  4  5  _  _  _  5  4  3  2  1 
//        1  2  3  4  _  _  _  _  _  4  3  2  1
//        1  2  3  _  _  _  _  _  _  _  3  2  1 
//        1  2  _  _  _  _  _  _  _  _  _  2  1
//        1  _  _  _  _  _  _  _  _  _  _  _  1

#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "Enter Any Number: ";
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        // Left increasing numbers (1-num)
        for (int j = 1; j <= i; j++)
        {
          cout << j << " ";
        }

        // Middle underscores
        int underscores = 2 * (num - i) - 1;

        for (int k = 0; k < underscores; k++)
        {
          cout << "_ ";
        }

        // Right decreasing numbers
        int start = i;
        // skip the first row's largest number
        if (i == num)
        {start = i - 1;} 

        for (int j = start; j >= 1; j--)
        {
          cout << j << " ";
        }

        cout << endl;
    }
return 0;
}