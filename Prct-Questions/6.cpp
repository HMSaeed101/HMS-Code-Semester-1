// A matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules:
// There are 21 matchsticks
// The computer asks the player to pick 1, 2, 3, or 4 matchsticks
// After the person picks, the computer does its picking
// Whoever is forced to pick up the last matchstick loses the game
#include <iostream>
using namespace std;

int main()
{
    int matchsticks = 21;
    int userPick, computerPick;

    cout << "Matchstick Game Started (21 matchsticks)\n";

    while(matchsticks > 1)
    {
        cout << "\nMatchsticks left: " << matchsticks;
        cout << "\nPick 1, 2, 3, or 4: ";
        cin >> userPick;

        if(userPick < 1 || userPick > 4 || userPick >= matchsticks)
        {
            cout << "Invalid move. Try again.";
            continue;
        }

        computerPick = 5 - userPick;

        matchsticks -= (userPick + computerPick);

        cout << "Computer picks: " << computerPick;
    }

    cout << "\nOnly 1 matchstick left.";
    cout << "\nYou are forced to pick it. You lose.";

    return 0;
}
