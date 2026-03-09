// Converting PKR to Saudi Riyal

#include<iostream>
using namespace std;
int main()
{  // Step 01 
    float amount, Riyal_rate, amount_in_Riyal;

    // Step 02 Input values
    cout << "Enter amount in PKR: ";
    cin >> amount;

    cout << "Enter Saudi Riyal rate : ";
    cin >> Riyal_rate; 

    amount_in_Riyal = amount / Riyal_rate;

    cout << "Your amount in Saudi Riyal is = " << amount_in_Riyal << " Riyal";
    return 0;

}