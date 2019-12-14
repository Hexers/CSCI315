#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int betNumber;
    int startingMoney = 1000;
    int endMoney;
    int diceValue;

    cout << "**Start the Game!!**" << endl;
    cout << "Type your number for betting (Please type -1 to terminate this game) : ";
    cin >> betNumber;


    for (diceValue = 1; diceValue == betNumber; diceValue++)
    {
        endMoney = startingMoney + 500;
        cout << "Dice Number: " << diceValue << endl;
        cout << "Your Betting Number: " << betNumber << endl;
        cout << "Current Amount: $ " << endMoney << endl;
        system("Pause");
    }
    for (diceValue = 2; diceValue == betNumber; diceValue++)
    {
        endMoney = startingMoney + 500;
        cout << "Dice Number: " << diceValue << endl;
        cout << "Your Betting Number: " << betNumber << endl;
        cout << "Current Amount: $ " << endMoney << endl;
        system("Pause");
    }
    for (diceValue = 3; diceValue == betNumber; diceValue++)
    {
        endMoney = startingMoney + 500;
        cout << "Dice Number: " << diceValue << endl;
        cout << "Your Betting Number: " << betNumber << endl;
        cout << "Current Amount: $ " << endMoney << endl;
        system("Pause");
    }
    for (diceValue = 4; diceValue == betNumber; diceValue++)
    {
        endMoney = startingMoney + 500;
        cout << "Dice Number: " << diceValue << endl;
        cout << "Your Betting Number: " << betNumber << endl;
        cout << "Current Amount: $ " << endMoney << endl;
        system("Pause");
    }
    for (diceValue = 5; diceValue == betNumber; diceValue++)
    {
        endMoney = startingMoney + 500;
        cout << "Dice Number: " << diceValue << endl;
        cout << "Your Betting Number: " << betNumber << endl;
        cout << "Current Amount: $ " << endMoney << endl;
        system("Pause");
    }
    for (diceValue = 6; diceValue == betNumber; diceValue++)
    {
        endMoney = startingMoney + 500;
        cout << "Dice Number: " << diceValue << endl;
        cout << "Your Betting Number: " << betNumber << endl;
        cout << "Current Amount: $ " << endMoney << endl;
        system("Pause");
    }
    for (diceValue = 1; diceValue != betNumber; diceValue++)
    {
        endMoney = startingMoney - 100;
        cout << "Dice Number: " << diceValue << endl;
        cout << "Your Betting Number: " << betNumber << endl;
        cout << "Current Amount: $ " << endMoney << endl;
        system("Pause");
    }
    for (diceValue = 2; diceValue != betNumber; diceValue++)
    {
        endMoney = startingMoney - 100;
        cout << "Dice Number: " << diceValue << endl;
        cout << "Your Betting Number: " << betNumber << endl;
        cout << "Current Amount: $ " << endMoney << endl;
        system("Pause");
    }
    for (diceValue = 3; diceValue != betNumber; diceValue++)
    {
        endMoney = startingMoney - 100;
        cout << "Dice Number: " << diceValue << endl;
        cout << "Your Betting Number: " << betNumber << endl;
        cout << "Current Amount: $ " << endMoney << endl;
        system("Pause");
    }
    for (diceValue = 4; diceValue != betNumber; diceValue++)
    {
        endMoney = startingMoney - 100;
        cout << "Dice Number: " << diceValue << endl;
        cout << "Your Betting Number: " << betNumber << endl;
        cout << "Current Amount: $ " << endMoney << endl;
        system("Pause");
    }
    for (diceValue = 5; diceValue != betNumber; diceValue++)
    {
        endMoney = startingMoney - 100;
        cout << "Dice Number: " << diceValue << endl;
        cout << "Your Betting Number: " << betNumber << endl;
        cout << "Current Amount: $ " << endMoney << endl;
        system("Pause");
    }
    for (diceValue = 6; diceValue != betNumber; diceValue++)
    {
        endMoney = startingMoney - 100;
        cout << "Dice Number: " << diceValue << endl;
        cout << "Your Betting Number: " << betNumber << endl;
        cout << "Current Amount: $ " << endMoney << endl;
        system("Pause");
    }
       /* if ((diceValue = 2))
        {
            endMoney = startingMoney - 100;
            cout << "Dice Number: " << diceValue << endl;
            cout << "Your Betting Number: " << betNumber << endl;
            cout << "Current Amount: $ " << endMoney << endl;
            system("Pause");

            else (diceValue = 0;)
            {
                endMoney = 0;
                cout << "You lost all your money. Game Over!!" << endl;
            }

        }*/





    return -1;
}
