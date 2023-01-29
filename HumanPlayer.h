#ifndef HUMAN_PLAYER_H
#define HUMAN_PLAYER_H
using namespace std;

// HUMAN PLAYER

class HumanPlayer{
private:
    char player;
public:
    HumanPlayer(char p){
        player = p;
    }
    void getMove(TicTacToe board, int& row, int& col);
};

void HumanPlayer::getMove(TicTacToe board, int& row, int& col){
    do {
        cout << "Player " << player << " enter move: ";
        cin >> row >> col;
        cout << endl;
        row = row - 1;
        col = col - 1;
    } while (!board.isValidMove(row,col));
}

#endif
