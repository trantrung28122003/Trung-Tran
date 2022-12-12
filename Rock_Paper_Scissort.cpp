
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <ctime>
using namespace std;

string convert_String(int input)
{
    string output;
    switch (input)
    {
    case 1:
        output = "Scrissort";
        return output;
        break;
    case 2:
        output = "Rock";
        return output;
        break;
    case 3:
        output = "Paper";
        return output;
        break;
    }
}

int main()
{
    int y = 0;

    int player;
    while (y < 28)
    {
        srand(time(0));
        int computer = rand() % 3 + 1;
        do
        {
            cout << "Please choose one of these (1.Scissort - 2.Rock - 3.Paper)";
            cin >> player;
            cout << "Computer choose " << convert_String(computer) << " ---"
                 << " Player choose " << convert_String(player) << endl;
            if (player < 0 && player > 3)
            {
                cout << "You entered wrong! Please choose agian";
            }
        } while (player < 0 && player > 3);

        if (computer == player)
        {
            cout << "You draw" << endl;
        }
        if (computer == 1)
        {
            if (player == 2)
            {
                cout << "You win" << endl;
            }
            else if (player == 3)
            {
                cout << "You lose" << endl;
            }
        }
        if (computer == 2)
        {
            if (player == 1)
            {
                cout << "You lose" << endl;
            }
            else if (player == 3)
            {
                cout << "You win" << endl;
            }
        }
        if (computer == 3)
        {
            if (player == 1)
            {
                cout << "You win" << endl;
            }
            else if (player == 2)
            {
                cout << "You lose" << endl;
            }
        }
        y++;
    }
}
