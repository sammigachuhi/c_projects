#include <iostream>
using namespace std;

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void displayBoard() {
    cout << "\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";
            if (j < 2) {
                cout << "|";
            }
            cout << "\n";
            if (i < 2) {
                cout << "---|---|---\n";
            }
        }
    }
    cout << "\n";
}

void makeMove(char player) {
    int move;
    cout << "Player " << player << ", enter your move (1-9): ";
    cin >> move;
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = player; 
    } else {
        cout << "Invalide move! Try again.\n";
        makeMove(player);
    }
}


bool checkWin() {
for(int i=0;i<3;i++){
if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]) return true;
if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]) return true;
}
if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]) return true;
if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]) return true;
return false;
}


int main() {
    int moves = 0;
    char currentPlayer = 'X';
    
    while (moves < 9) {
        displayBoard();
        makeMove(currentPlayer);
        moves++;
        
        if (checkWin()) {
            displayBoard();
            cout << "Player " << currentPlayer << " wins!\n";
            return 0;
        }
        
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    
    displayBoard();
    cout << "It's a draw!\n";
    return 0;
}








