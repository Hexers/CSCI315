#include <iostream>

using namespace std;

int main()
{
/*
    int num;
    int i;
    int j;

    cout << " Please type your number: ";
    cin >> num;

    for (i = 0; i < num; i++)
    {
        for ( j = num - 1; j > i; j--)
        {
            cout << " ";
        }
        for (j =0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = 1; i < num; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (j = 2 * num -1; j > 2 * i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
*/

    int start = 0;
    int end = 10;

    for (int i = 0; i < 9; i++)
    {
        if ( i < 10/2)
        {
            start = i, end--;

        }
        else start--, end++;
        for (int j = start; j > 0; j--)
            cout << " ";
        for (int j = start; j < end; j++)
            cout << "*";
        cout << endl;

    }
    return 0;
}
