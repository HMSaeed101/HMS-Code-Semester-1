#include <iostream>
using namespace std;

int main() 
{
    int a = 10;
    int b  = 20;
    int* p = &a;
    
    cout << a << endl;
    cout << p << endl;
    
    *p = 100;
    cout << *p << endl;

    return 0;
}
