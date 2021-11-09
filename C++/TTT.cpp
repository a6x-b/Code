#include <iostream>
#include <windows.h>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();
int main()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns, rows;

    int player = 1,i,choice;
    cout<<player;
    system("pause");
    return 0;
}
