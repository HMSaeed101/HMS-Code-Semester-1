// bool isPrime(int n) that determines if a num is Prime
// void print PrimesInRange(int start, int end) that uses the first function to print all prime numbers in a given range
#include <iostream>
using namespace std;
bool isPrime(int n);
void PrimesInRange (int start, int end);

int main()
{
    char entry;
    bool pm_num;
    cout << "1. Checking Prime Number" << endl;
    cout << "2. Printing Prime Number" << endl;  
    cin >> entry;

    switch(entry)
    {
        case '1':
        int num, prime;
        cout << "Enter a number : ";
        cin >> num;
        pm_num = isPrime(num);
        if(pm_num)  {cout << "Prime Number";}
        else        {cout << "Not a Prime Number";}
        break;

        case '2':
        int start, end;
        cout << "Enter the range." << endl;
        cout << "Start" << endl;
        cin >> start;
        cout << "End" << endl;
        cin >> end;
        PrimesInRange(start,end);
    }
}

bool isPrime(int n)
{
    for(int i=2; i<n ; i++)
    {
        if(n % i == 0)
        {return false;}
    }
    return true;
}

void PrimesInRange (int start, int end)
{
    bool c;
    cout << endl ;
    for(int range=start; range<end ; range++)
    {
        c = isPrime(range);
        if(c)   {cout << range << endl;}
    }
}