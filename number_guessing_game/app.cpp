#include <iostream>

using namespace std;

int main() {
    srand(time(nullptr));
    int random = 1 + (rand() % 100);
    bool has_won {0};
    int player_num {0};

    cout << "Pick a number between 1 and 100: ";
    
    while(!has_won)
        {
            
            cin >> player_num;

            if(player_num > random)
            {
                cout << "\nNumber is too large. Pick again: ";
            }
            else if(player_num < random)
            {
                cout << "\nNumber is too small. Pick again: ";
            }
            else
            {
                has_won = 1;
                cout << "\n**********************************\n";
                cout << "You Got It! My number was " << random << '\n' << endl;
            }
        }
        

    return 0;
}
