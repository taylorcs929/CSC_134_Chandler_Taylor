//author@ Chandler Taylor
//date@ 11/10/2025
//purpose@ Build a tic tac toe game using the basic 2-D array and functions to handle the game logic.

#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 3; // Size of the Tic Tac Toe board
char board[SIZE][SIZE]; // 2D array to represent the board
void initializeBoard() {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            board[i][j] = ' ';
        }
    }
}
bool isWinner(char player) {
    // Check rows and columns
    for (int i = 0; i < SIZE; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}
bool isBoardFull() {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == ' ') {
                return false; // Found an empty space
            }
        }
    }
    return true; // No empty spaces found
}
void printBoard() {
    cout << "Current Board:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j];
            if (j < SIZE - 1) cout << " | ";
        }
        cout << endl;
        if (i < SIZE - 1) {
            cout << "---------\n"; // Print separator between rows
        }
    }
}
int main() {
    initializeBoard();
    char currentPlayer = 'X';
    int row, col;
    while (true) {
        printBoard();
        cout << "Player " << currentPlayer << ", enter your move (row and column):";
        cin >> row >> col;
        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue; // Skip to the next iteration
        }
        board[row][col] = currentPlayer; // Place the player's mark
        if (isWinner(currentPlayer)) {
            printBoard();
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }
        if (isBoardFull()) {
            printBoard();
            cout << "It's a draw!" << endl;
            break;
        }
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // Switch players
    }
    return 0;
}   
