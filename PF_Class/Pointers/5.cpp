// Maximum in an array by pointers derefrencing
#include <iostream>
using namespace std;
int main() 
{
    int num[5];
    int* p[5];
    for (int i=0; i<5; i++)
    {
        cout << "Number # " << i+1 << " : ";
        cin >> num[i];
        p[i] = &num[i];
    }

    int maxVal = *p[0];
    for (int i = 1; i < 5; i++) 
    {
        if (*p[i] > maxVal)
        {
            maxVal = *p[i];
        }
    }
    cout << "Maximum = " << maxVal;
    return 0;
}