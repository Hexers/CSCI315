/*********************************************************************
    PROGRAM:    Term Project - C++
    PROGRAMMER: Aleksandar Kljaic
    INSTRUCTOR: Kwon, Donghwoon
    DUE DATE:   Monday December 2, 2019

*********************************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <cctype>
#include <Windows.h>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <algorithm>

using namespace std;

class TicTacToe
{
private:

    /* Current Board Position */
    int positionOnBoard[9];

    /* Current Players */
    int player;

    /* Amount of Turns Thus Far */
    int totalTurns;

    /* Players Name */
    string playerName;

    /* Amount of Players */
    int totalPlayers;

    /* Choosing which type of player */
    bool typeOfPlayer[10];

public:

    /* Random - Amount of Players - Looping */
    TicTacToe();

    void end();
    /* Who wins? */
    void turnOutput();

    /* User inputs Player One Name */
    void playerOneName();

    /* Declares Player One as a Human and NOT AI/Computer */
    bool playerOneHuman();

    /* Player 1 - Human */
    void playerOneMove();

    /* Player 2 - AI/Computer */
    void playerTwoMove();

    /* Draws Tic-Tac-Toe Game Board */
    void drawGameBoard();

    /* Declares winner of Tic-Tac-Toe Game */
    bool gameWinner();

    /* Decides if the Tic-Tac-Toe Board is full to declare a Tie */
    bool tiedGame();

    /* Alternates turns between Player 1 and Player 2 */
    void nextTurn();

};

/* Functions Start Here */
TicTacToe::TicTacToe()
{
    /* Random */
    srand (time(0));

    /* Player One Starts First */
    player = 1;
    totalTurns = 0;

    /* Total Players */
    totalPlayers = 2;

    /* Player 1 is Human (You) */
    typeOfPlayer[1] = 1;

    /* Player 2 is AI (Computer) */
    typeOfPlayer[2] = 0;


    for (int i = 0; i < 9; i++)
        positionOnBoard[i] = 0;

}

void TicTacToe::playerOneName()
{
    /* Requesting Player Ones name */
    cout << "Enter a name for Player One: ";
    /* Converts to UPPERCASE */
    getline(cin,playerName);
    cout << playerName;
}

void TicTacToe::end()
{
    system("PAUSE");
}

void TicTacToe::drawGameBoard()
{

    /* Tic-Tac-Toe Board Drawn */

      // _________________
      //|     |     |     |
      //|  1  |  2  |  3  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  4  |  5  |  6  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  7  |  8  |  9  |
      //|_____|_____|_____|

    std::cout << std::endl;

    /* Game Rules/Instructions First */
    cout << "\tGame Instructions:" << endl;
    cout << "\t ** Pick a Number 1 - 9 for where to place your X" << endl;
    cout << "\t ** Spaces labeled as '0' are available" << endl;
    cout << "\t ** Player One is X or 1" << endl;
    cout << "\t ** Player Two is O or 2" << endl;
    cout << "\t\t _________________" << endl;
    cout << "\t\t|     |     |     |" << endl;
    cout << "\t\t|  " << "1" << "  |  " << "2" << "  |  " << "3  |"<< endl;
    cout << "\t\t|_____|_____|_____|" << endl;
    cout << "\t\t|     |     |     |" << endl;
    cout << "\t\t|  " << "4" << "  |  " << "5" << "  |  " << "6  |" << endl;
    cout << "\t\t|_____|_____|_____|" << endl;
    cout << "\t\t|     |     |     |" << endl;
    cout << "\t\t|  " << "7" << "  |  " << "8" << "  |  " << "9  |" << endl;
    cout << "\t\t|_____|_____|_____|" << endl << endl;

    /* Game Board outputs start */
    cout << "\tLet The Games Begin!" << endl;
    cout << "\t\t _________________" << endl;
    cout << "\t\t|     |     |     |" << endl;
    cout << "\t\t|  " << positionOnBoard[0] << "  |  " << positionOnBoard[1] << "  |  " << positionOnBoard[2] << "  |" << endl;
    cout << "\t\t|_____|_____|_____|" << endl;
    cout << "\t\t|     |     |     |" << endl;
    cout << "\t\t|  " << positionOnBoard[3] << "  |  " << positionOnBoard[4] << "  |  " << positionOnBoard[5] << "  |" << endl;
    cout << "\t\t|_____|_____|_____|" << endl;
    cout << "\t\t|     |     |     |" << endl;
    cout << "\t\t|  " << positionOnBoard[6] << "  |  " << positionOnBoard[7] << "  |  " << positionOnBoard[8] << "  |" << endl;
    cout << "\t\t|_____|_____|_____|" << endl << endl;

}

void TicTacToe::turnOutput()
{
    std::cout << "\nPlayer " << player << "'s turn.\n";
}

void TicTacToe::nextTurn()
{
    totalTurns++;

    if (++player > totalPlayers)
        player = 1;
}

bool TicTacToe::playerOneHuman()
{
    return typeOfPlayer[player];
}

void TicTacToe::playerOneMove()
{
    std::cout << "\nEnter your move " << playerName << ":" ;
    int move;

    do
    {
        /* Moves */
        std::cin >> move;
        /* So user can enter 1-9 for the gameBoard instead of 0-8 due to Array Size */
        move--;
    }
    /* Checks to see if the game is still going and hasn't ended (9 Total Moves) */
    while (move < 0 || move > 8 || positionOnBoard[move] != 0);

    positionOnBoard[move] = player;
}

void TicTacToe::playerTwoMove()
{

    int move;

    do
    {
        move  = rand() % 9;     // just pick a random number
    }
    while (move < 0 || move > 8 || positionOnBoard[move] != 0);

    positionOnBoard[move] = player;

}

bool TicTacToe::gameWinner()
{
    /* Winning Array Possibilities */
    int board[8][3] = {{0,1,2},
      // _________________
      //|     |     |     |
      //|  X  |  X  |  X  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  4  |  5  |  6  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  7  |  8  |  9  |
      //|_____|_____|_____|
                       {3,4,5},
      // _________________
      //|     |     |     |
      //|  1  |  2  |  3  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  X  |  X  |  X  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  7  |  8  |  9  |
      //|_____|_____|_____|
                       {6,7,8},
      // _________________
      //|     |     |     |
      //|  1  |  2  |  3  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  4  |  5  |  6  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  X  |  X  |  X  |
      //|_____|_____|_____|
                       {0,3,6},
      // _________________
      //|     |     |     |
      //|  X  |  2  |  3  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  X  |  5  |  6  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  X  |  8  |  9  |
      //|_____|_____|_____|
                       {1,4,7},
      // _________________
      //|     |     |     |
      //|  1  |  X  |  3  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  4  |  X  |  6  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  7  |  X  |  9  |
      //|_____|_____|_____|
                       {2,5,8},
      // _________________
      //|     |     |     |
      //|  1  |  2  |  X  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  4  |  5  |  X  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  7  |  8  |  X  |
      //|_____|_____|_____|
                       {0,4,8},
      // _________________
      //|     |     |     |
      //|  X  |  2  |  3  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  4  |  X  |  6  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  7  |  8  |  X  |
      //|_____|_____|_____|
                       {2,4,6}};
      // _________________
      //|     |     |     |
      //|  1  |  2  |  X  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  4  |  X  |  6  |
      //|_____|_____|_____|
      //|     |     |     |
      //|  X  |  8  |  9  |
      //|_____|_____|_____|

    for (int i = 0; i < 8; i++)
    {
        if ((positionOnBoard[board[i][0]] == positionOnBoard[board[i][1]]) // 0 = 1

            && (positionOnBoard[board[i][1]] == positionOnBoard[board[i][2]]) // 1 = 2

            && positionOnBoard[board[i][0]] != 0) // 0 != 0
        {
            system("CLS");
            std::cout << "\nPlayer " << positionOnBoard[board[i][0]]
                      << "/" << playerName <<  " wins!\n";

            std::cout << "\nPlayer " << positionOnBoard[board[i][0]]
                      <<  " has been written to file\n\n";

            cout << "A new game of Tic-Tac-Toe is starting!" << endl;
            cout << "Close the window if you'd like to quit" << endl;

            /* Prints Winner to File */
            ofstream myfile;
            myfile.open ("winners.txt");
            myfile << "Player " << positionOnBoard[board[i][0]] <<"/" << playerName << " wins the game." << endl;
            myfile.close();
            /* Returns to Winner if True */
            return 0;
        }
    }

    return 0;   // winner false
}

bool TicTacToe::tiedGame()
{
    /* TicTacToe Game being Tied */
    if (totalTurns == 9)
    {
        std::cout << "\nThe Game is Tied!\n";
        return 1;
    }
    else
        return 0;
}

int main()
{
    SetConsoleTitle( TEXT( "Tic-Tac-Toe --- Aleksandar Kljaic"));
    TicTacToe Game;
    Game.playerOneName();
    Game.drawGameBoard();

    do
    {

        Game.turnOutput();

        if (Game.playerOneHuman())
            Game.playerOneMove();
        else
            Game.playerTwoMove();

        Game.drawGameBoard();
        Game.nextTurn();

    }
    while (!Game.gameWinner() && !Game.tiedGame());

    Game.end();

    return 0;
}
