#include <iostream>
using namespace std;
void modifyValue(int* p);
int main() 
{

    /* 1. Basic variable and pointer */
    int a = 10;
    int* p = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << p << endl;
    cout << "Value of variable pointers points to : " << *p << endl;

    /* 2. Modifying value through pointer (Derefrencing) */
    *p = 20;
    cout << "Modified a: " << a << endl;

    /* 3. Null pointer */
    int* np = nullptr;
    if (np == nullptr)
    {
        cout << "Null pointer is safe" << endl;
    }

    /* 4. Pointer and array */
    int arr[3] = {1, 2, 3};
    int* arr_ptr = arr;

    cout << "Array first element: " << *arr_ptr << endl;
    cout << "Array second element: " << *(arr_ptr + 1) << endl;

    /* 5. Pointer increment */
    arr_ptr++;
    cout << "After increment, points to: " << *arr_ptr << endl;

    /* 6. Dynamic memory allocation */
    int* dynamic_ptr = new int;
    *dynamic_ptr = 50;
    cout << "Dynamic value: " << *dynamic_ptr << endl;

    delete dynamic_ptr;
    dynamic_ptr = nullptr;

    /* 7. Pointer to pointer (Double Pointer) */
    int x = 5;
    int* px = &x;
    int** ppx = &px;

    cout << "Value using double pointer: " << **ppx << endl;

    /* 8. Pointer passed to function */
    modifyValue(&x);
    cout << "Value after function call: " << x << endl;

    /* 9. Const correctness */
    const int y = 30;
    const int* cp = &y;   // value cannot be modified 
    cout << "Const value via pointer: " << *cp << endl;

    /* 10. Void pointer */
    int z = 99;
    void* vp = &z;
    cout << "Void pointer value: " << *(static_cast<int*>(vp)) << endl;

    return 0;
}


/* Function using pointer (pass by address) */
void modifyValue(int* p)
{
    *p = 100;
}