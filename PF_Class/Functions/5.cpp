#include <iostream>
using namespace std;

// Function that counts how many times it has been called
void callCounter() {
    static int count = 0;  //static local variable retains its value between calls
    count++;
    cout << count << " times." << endl;
}

int main() 
{
    callCounter();
    cout << count ;
    return 0;
}
