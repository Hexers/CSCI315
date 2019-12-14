#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    int answer[3];
    int player[3];
    int strike = 0;
    int ball = 0;
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        srand(time(NULL));
        answer[i] = rand() % 9 + 1;
        for (int j = 0; j < i; j++)
        {
            int i = 0;
            if (answer[i] == answer[j])
            {
                i--;
                break;
            }
        }
    }
    while (1)
    {
        count++;
        cout << "Please type your three numbers: ";
        cin >> player[0] >> player[1] >> player[2];

        if (player[0] == player[1] || player[0] == player[2] || player[1] == player[2])
        {
            cout << "No same numbers allowed!";
            count--;
            continue;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if(answer[i] == player[j] && i==j)
                    strike++;

                if(answer[i] == player[j] && i != j)
                    ball++;

            }

        }

        if (strike == 3)
        {
            cout << "3 Strikeout!!! You found the answer!" << endl;
            break;
        }
        cout << strike << " Strike " << ball << " Ball" << endl;

        if (count  == 5)
        {
            cout << "You used all chances!!! Game Over!!" << endl;
            break;
        }
        strike = 0;
        ball = 0;
    }

    return 0;
}
