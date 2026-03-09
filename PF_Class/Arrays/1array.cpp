// Square Matrix Multiplication
#include <iostream>
using namespace std;
int main()
{
/*
Conditions for Multiplication of Square Matrices
1. Columns of first == rows of second matrix
2. B x A != A x B
3. Actual inner multiplication _ Rows x Columns
4. Result Matrix is same as candidates

Code
1. Loops how many... nested nested loops 
2. Steps 

*/

int matrix_one[2][2] = {    {1,0}, {0,1}  }; // Identity matrix
int matrix_two[2][2] = {    {2,3}, {4,5}  };
int RESULT[2][2]     = {0}; // init all variables to zero

for(int i=0; i<2; i++)
{
    for(int j=0; j<2; j++)
    {
        // RESULT[i][j] =  (matrix_one[0][0] * matrix_two[0][0]) + 
        //                (matrix_one[0][1] * matrix_two[1][0]);

        RESULT[i][j] =  (matrix_one[i][i] * matrix_two[0][j]) + 
                        (matrix_one[i][i+1] * matrix_two[j+1][j]);
    }
}
cout << "\tMultiplication Matrix\n";
for(int i=0; i<2; i++)
{
    for(int j=0; j<2; j++)
    {
        cout << RESULT[i][j];
    }
    cout << endl;
}
}