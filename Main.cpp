#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    bool continueGame = true;
    cout << "Welcome to Rock-Paper-Scissors!" << endl;
    do {
        cout << "Player 1, choose a number:" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cin >> num1;
        cout << "Player 2, choose a number:" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cin >> num2;
        if (num1 == num2) {
            cout << "It's a tie!" << endl;
        }
        else if (num1 == 1 && num2 == 3 || num1 == 2 && num2 == 1 || num1 == 3 && num2 == 2) {
            cout << "Player 1 wins!" << endl;
        }
        else {
            cout << "Player 2 wins!" << endl;
        }
        cout << "Do you want to play again? (Y/N)" << endl;
        cin >> continueGame;
    } while (continueGame == 'Y');
    if (continueGame == 'Y') {
        cout << "Welcome back to Rock-Paper-Scissors!" << endl;
    }
    else if (continueGame == 'N') {
        cout << "Goodbye!" << endl;
    }
    else {
        cout << "Please enter Y or N: ";
        cin >> continueGame;
        if (continueGame == 'Y') {
            cout << "Welcome back to Rock-Paper-Scissors!" << endl;
        }
        else if (continueGame == 'N') {
            cout << "Goodbye!" << endl;
        }
        else {
            cout << "Please enter Y or N: ";
            cin >> continueGame;
        }
    }
}