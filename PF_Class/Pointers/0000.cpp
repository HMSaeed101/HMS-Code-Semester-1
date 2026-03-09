#include <iostream>
using namespace std;

// ---------------- Callback function ----------------
void greet() 
{
    cout << "Hello from callback!" << endl;
}

void execute(void (*callback)()) 
{
    cout << "Executing callback: ";
    callback();
}

// ---------------- Double pointer function ----------------
void allocate(int** p) 
{
    *p = new int;  // allocate memory dynamically
    **p = 100;
}

// ---------------- Main program ----------------
int main() 
{
    cout << "=== 1. Single pointer ===" << endl;
    int a = 42;
    int* p = &a;
    cout << "Value of a: " << *p << endl;
    *p = 50;
    cout << "New value of a via pointer: " << a << endl << endl;


    cout << "=== 2. Pointer arithmetic with array ===" << endl;
    int arr[5] = {1,2,3,4,5};
    int* pa = arr; // pointer to first element
    for(int i = 0; i < 5; i++)
    {
        cout << "Element " << i << ": " << *(pa + i) << endl;
    }
    cout << endl;


    cout << "=== 3. 2D Array and pointers ===" << endl;
    int arr2D[2][3] = {{10,20,30},{40,50,60}};
    int (*rowPtr)[3] = arr2D; // pointer to a row
    cout << "First element of second row: " << *(*(rowPtr + 1) + 0) << endl;
    cout << "Fifth element in memory order: " << *(&arr2D[0][0] + 4) << endl << endl;


    cout << "=== 4. Double pointer ===" << endl;
    int* dp = nullptr;
    allocate(&dp);
    cout << "Value allocated via double pointer: " << *dp << endl;
    delete dp; // free memory
    cout << endl;


    cout << "=== 5. Dynamic array using new/delete ===" << endl;
    int n = 5;
    int* dynArr = new int[n];
    for(int i = 0; i < n; i++) dynArr[i] = (i+1)*10;
    for(int i = 0; i < n; i++) cout << dynArr[i] << " ";
    cout << endl;
    delete[] dynArr;
    cout << endl;

    
    cout << "=== 6. Function pointer / Callback ===" << endl;
    execute(greet);

    return 0;
}
