#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    cout << "Please choose Rock, Paper or Scissors" << endl;
    while (true) {
        string Player;
        cin >> Player;
        if (Player == "Rock" || Player == "Paper" || Player == "Scissors") {
            srand(time(NULL));
            int Random = rand() % 3;
            if (Random == 0) {
                if (Player == "Rock") {
                    cout << "The bot picked paper, you lost";
                }
                if (Player == "Paper") {
                    cout << "The bot picked paper, its a tie";
                }
                if (Player == "Scissors") {
                    cout << "The bot picked paper, you lost";
                }
            }
            if (Random == 1) {
                if (Player == "Rock") {
                    cout << "The bot picked scissors, you won";
                }
                if (Player == "Paper") {
                    cout << "The bot picked scissors, you lost";
                }
                if (Player == "Scissors") {
                    cout << "The bot picked scissors, its a tie";
                }
            }
            if (Random == 2) {
                if (Player == "Rock") {
                    cout << "The bot picked rock, its a tie";
                }
                if (Player == "Paper") {
                    cout << "The bot picked rock, you won";
                }
                if (Player == "Scissors") {
                    cout << "The bot picked rock, you lost";
                }
            }
            break;
        }
        else {
            cout << "Wrong input. Please enter Rock, Paper or Scissors" << "\n";
        }
    }
    return 0;
}
