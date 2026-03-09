//  Write a program inputs a no. and a character in main function and passes them to a function. It then displays a square of that entered character against the no. of rows user entered.
// Hint: if user enter 4 and @, i

#include <iostream>
using namespace std;
void display(int a, char b);
int main()
{
    int num;
    char character;
    cout << "Enter the Number and the Character to Print a Square.\n";
    cout << "Number (Size) : ";
    cin >> num;
    cout << "Character :";
    cin >> character; 

    display(num, character);

}

void display(int a, char b)
{
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            cout << b << " ";
        }
    cout << endl;
    }
}