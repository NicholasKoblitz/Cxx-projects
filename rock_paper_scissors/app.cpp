// This is a basic program on C++
//
// Try to modify and run it and check out
// the output in the terminal below.
//
// Happy coding! :-)

#include <iostream>
#include <string>

using namespace std;



bool check(string player, string player2 = "t",int npc = 0, char playAgain = 'n')
{
    if(player == "rock" && (npc == 1 || player2 == "rock"))
            {
                cout << "Tie!\nTry again" << endl;
            }
            else if(player == "rock" && (npc == 3 || player2 == "scissors"))
            {
                cout << "You Won!" << endl;
                cout << "Would you like to play again (y/n): ";
                cin >> playAgain;

                if(playAgain == 'n')
                {
                    return 1;
                }
            }
            else if(player == "rock" && (npc  == 2 || player2 == "paper"))
            {
                cout << "You Lose :(" << endl;
                cout << "Would you like to play again (y/n): ";
                cin >> playAgain;

                if(playAgain == 'n')
                {
                    return 1;
                }
            }
    else if(player == "paper" && (npc == 2 || player2 == "paper"))
            {
                cout << "Tie!\nTry again" << endl;
            }
            else if(player == "paper" && (npc== 1 || player2 == "rock"))
            {
                cout << "You Won!" << endl;
                cout << "Would you like to play again (y/n): ";
                cin >> playAgain;

                if(playAgain == 'n')
                {
                    return 1;
                }
            }
            else if(player == "paper" && (npc == 3 || player2 == "scissors"))
            {
                cout << "You Lose :(" << endl;
                cout << "Would you like to play again (y/n): ";
                cin >> playAgain;

                if(playAgain == 'n')
                {
                    return 1;
                }
            }
    else if(player == "scissors" && (npc == 3 || player2 == "scissors"))
            {
                cout << "Tie!\nTry again" << endl;
            }
            else if(player == "scissors" && (npc == 2 || player2 == "paper"))
            {
                cout << "You Won!" << endl;
                cout << "Would you like to play again (y/n): ";
                cin >> playAgain;

                if(playAgain == 'n')
                {
                    return 1;
                }
            }
            else if(player == "scissors" && (npc == 1 || player2 == "rock"))
            {
                cout << "You Lose :(" << endl;
                cout << "Would you like to play again (y/n): ";
                cin >> playAgain;

                if(playAgain == 'n')
                {
                    return 1;
                }
            }
    return 0;
}


int main() {
    
    bool hasWon {0};
    string playerMove1 {""};
    string playerMove2 {""};
    char playAgain{'q'};
    bool isTwoPlayers {0};
    int playerCount{0};

    cout << "\nWelcome to Rock Paper Scissors\n" << endl;
    cout << "Type 'rock', 'paper', or 'scissors' as the moves" << endl;
    cout << "Is there 1 or 2 players?\nEnter 1 or 2: ";
    cin >> playerCount;
    
    while(!hasWon)
        {
            if(playerCount == 1)
            {
                srand(time(nullptr));
                int npcChoice = 1 + (rand() % 3);
                cout << "\nWhat move would you like to play: ";
                cin >> playerMove1;
                hasWon = check(playerMove1, "t",npcChoice);
            }
            else if(playerCount == 2)
            {
                cout << "Player 1, what is your move: ";
                cin >> playerMove1;
                system("clear");
                cout << "Player 2, what is your move: ";
                cin >> playerMove2;
                system("cls");
                hasWon = check(playerMove1, playerMove2);
            }
            
            
        }
    return 0;
}
