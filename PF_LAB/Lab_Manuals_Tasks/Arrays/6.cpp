/*
User to enter the number of votes received by 5 candidate.
Output candidate’s number, the number of votes received, and the percentage of the total votes received by the candidate.
*/
#include <iostream>
using namespace std;

int main() 
{
    const int columns = 2;

    float data[5][3];
    float Total_votes = 0;

    // Candidate Number 
    for(int i=0; i<5; i++)
    {
        data[i][0] = i+1 ;
    }
    // Votes Entry
    for(int i = 0; i < 5; i++) 
    {
        cout << "Enter votes for candidate " << i + 1 << ": ";
        cin >> data[i][1];
        Total_votes += data[i][1];
    }
    // Percentage Calculation
    for(int i = 0; i < 5; i++) 
    {
        data[i][2] = (data[i][1] / Total_votes) * 100;
    }
    cout << "___________________________________________________\n";
    cout << "\nCandidate\tVotes\t      Percentage\n";
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << data[i][j] << "\t\t";
        }
    cout << endl;
    }
    return 0;
}
