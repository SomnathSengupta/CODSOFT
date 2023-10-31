#include<iostream>
using namespace std;
char board[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
void showBoard() {

    cout << "   " << "   |   " << "   |   " << endl;
    cout << "   " << board[0] << "  |   " << board[1] << "  |   " << board[2] << endl;
    cout << "   " << "   |   " << "   |   " << endl;
    cout << "--------------------" << endl;
    cout << "   " << "   |   " << "   |   " << endl;
    cout << "   " << board[3] << "  |   " << board[4] << "  |   " << board[5] << endl;
    cout << "   " << "   |   " << "   |   " << endl;
    cout << "--------------------" << endl;
    cout << "   " << "   |   " << "   |   " << endl;
    cout << "   " << board[6] << "  |   " << board[7] << "  |   " << board[8] << endl;
    cout << "   " << "   |   " << "   |   " << endl;
}
void get_x_player_choice() {
    while (true) {
        cout << "Select your position between 1 and 9: " ;
        int choise;
        cin >> choise;
        choise --;
        if (choise < 0 || choise > 8) {
            cout << "Please select your position between 1 and 9: " << endl;
        }
        else if (board[choise] != ' ') {
            cout << "Please select an empty position: " << endl;
        }
        else {
            board[choise] = 'X';
            break;
        }
    }
}
void get_o_player_choise() {
    while (true) {
        cout << "Select your position between 1 and 9: " ;
        int choise;
        cin >> choise;
        choise --;
        if (choise < 0 || choise > 8) {
            cout << "Please select your position between 1 and 9: " << endl;
        }
        else if (board[choise] != ' ') {
            cout << "Please select an empty position: " << endl;
        }
        else {
            board[choise] = 'O';
            break;
        }
    }
}
int countBoard(char ch) {
    int count = 0;
    for (int i = 0; i < 9; i++) {
        if (board[i] == ch) {
            count++;
        }
    }
    return count;
}
char winner() {
    //Checking Horizontally:
    if (board[0] == board[1] && board[1] == board[2] && board[0] != ' ') {
        return board[0];
    }
    if (board[3] == board[4] && board[4] == board[5] && board[3] != ' ') {
        return board[3];
    }
    if (board[6] == board[7] && board[7] == board[8] && board[6] != ' ') {
        return board[6];
    }
    //Checking Vertically:
    if (board[0] == board[3] && board[3] == board[6] && board[0] != ' ') {
        return board[0];
    }
    if (board[1] == board[4] && board[4] == board[7] && board[1] != ' ') {
        return board[1];
    }
    if (board[2] == board[5] && board[5] == board[8] && board[2] != ' ') {
        return board[2];
    }
    //Checking Diagonally:
     if (board[0] == board[4] && board[4] == board[8] && board[0] != ' ') {
        return board[0];
    }
    if (board[2] == board[4] && board[4] == board[6] && board[2] != ' ') {
        return board[2];
    }
    if(countBoard('X') + countBoard('O') < 9){
        return 'C';
    }
    else {
        return 'D';
    }
}
 void TicTacToe() {
        string x_player, o_player;
        cout << "Enter X player name: ";
        cin >> x_player;
        cout << endl << "Enter O player name: ";
        cin >> o_player;
        while (true) {
            system("cls");
            showBoard();
            if (countBoard('X') == countBoard('O')) {
                cout << x_player <<"'s turn." << endl;
                get_x_player_choice();
            }
            else {
                cout << o_player <<"'s turn." << endl;
                get_o_player_choise();
            }
            char win = winner();
            if (win == 'X') {
                system("cls");
                showBoard();
                cout << x_player << " won!!!" << endl;
                break;
            }
            else if (win == 'O') {
                system("cls");
                showBoard();
                cout << o_player << " won!!!" << endl;
                break;
            }
            else if (win == 'D') {
                system("cls");
                showBoard();
                cout << "It is Draw!!!" << endl;
                break;
            }
        }
 }
int main()
{
    TicTacToe();
    while (true) {
        int choise;
        cout << "Enter 1 to exit, enter 2 to play again: ";
        cin >> choise;
        if (choise == 1) {
            exit(0);
        }
        if (choise) {
            for (int i = 0; i < 9; i++) {
                board[i] = ' ';
            }
            TicTacToe();
        }
    }
    return 0;
}