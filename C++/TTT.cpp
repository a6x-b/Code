#include <iostream>
#include <windows.h>
using namespace std;

char spots[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();
int main()
{
    int player = 1,i,choice;
    char mark;
    do
    {
        board();
        player=(player%2)?1:2;

        cout<<"Player "<<player<<", enter a number:  ";
        cin>>choice;
        mark = (player==1)? 'X': 'O';
        if(choice+48 == spots[choice]) spots[choice] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
            return 0;
        }
        i=checkwin();

        player++;
    } while (i == -1);
    board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
    system("pause");
}

int checkwin()
{
    if (spots[1] == spots[2] && spots[2] == spots[3])

        return 1;
    else if (spots[4] == spots[5] && spots[5] == spots[6])

        return 1;
    else if (spots[7] == spots[8] && spots[8] == spots[9])

        return 1;
    else if (spots[1] == spots[4] && spots[4] == spots[7])

        return 1;
    else if (spots[2] == spots[5] && spots[5] == spots[8])

        return 1;
    else if (spots[3] == spots[6] && spots[6] == spots[9])

        return 1;
    else if (spots[1] == spots[5] && spots[5] == spots[9])

        return 1;
    else if (spots[3] == spots[5] && spots[5] == spots[7])

        return 1;
    else if (spots[1] != '1' && spots[2] != '2' && spots[3] != '3' 
                    && spots[4] != '4' && spots[5] != '5' && spots[6] != '6' 
                    && spots[7] != '7' && spots[8] != '8' && spots[9] != '9')

        return 0;
    else
        return -1;
}

void board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << spots[1] << "  |  " << spots[2] << "  |  " << spots[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << spots[4] << "  |  " << spots[5] << "  |  " << spots[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << spots[7] << "  |  " << spots[8] << "  |  " << spots[9] << endl;

    cout << "     |     |     " << endl << endl;
}