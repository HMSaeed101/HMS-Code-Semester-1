// Converting PKR to Dollar

#include<iostream>
using namespace std;
int main()
{   
    // Step 01 Declaring Variables 
    int PKR,Dollar,Conver;

    // Step 02 Assigning Values
    cout << "Enter value in PKR = ";
    cin >> PKR;
    Dollar = 280;
    
    //Step 03 Calculating Dollar
    Conver = PKR/Dollar;
    
    // Step 04 Printing Dollar
    cout << "Value in Dollar = " << Conver;
    return 0;
}