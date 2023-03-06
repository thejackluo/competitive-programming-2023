#include <iostream>
using namespace std;

int main() {
    string input = "A2B1A2B2A1A2A2A2";

    // For Kattis
    // cin >> input;
    
    int A, B = 0;
    string player = "";
    bool winByTwo = false;
    
    for (int i = 0; i <= input.length(); i++) {
        // Check if the character at i is a number or a string
        if (isdigit(input[i])) {
            if (player == "A") {
                A += input[i] - '0';
            } else {
                B += input[i] - '0';
            }
        } else {
            player = input[i];
        }

        // Check if the players are tied 10 - 10, then enable winByTwo
        if (A == 10 && B == 10) {
            winByTwo = true;
        }

        // Check if the game is over
        if (!winByTwo) {
            if (A >= 11 || B >= 11) {
                // Check which player won
                if (A > B) {
                    cout << 'A';
                } else {
                    cout << 'B';
                }
            }
        } else {
            // Check if one player leads the other by more than two points
            if (A >= B + 2 || B >= A + 2) {
                // Check which player won
                if (A > B) {
                    cout << 'A';
                } else {
                    cout << 'B';
                }
            }
        }

        // Print the current state of the game
        cerr << "Iteration " << i << endl;
        cerr << "Player: " << player << endl;
        cerr << "A: " << A << endl;
        cerr << "B: " << B << endl;
    }
}