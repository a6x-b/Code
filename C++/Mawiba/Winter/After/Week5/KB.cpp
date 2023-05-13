#include <iostream>
using namespace std;

int main()
{
    string Message;
    char Dir;
    // Keyboard
    char Keyboard[3][10] = {{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'}, 
                            {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'}, 
                            {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}};
    cin >> Dir;
    cin >> Message;
    short Size = Message.size();
    //grdofir
    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (Message[i] == Keyboard[j][k])
                {
                    if (Dir == 'R')
                        cout << Keyboard[j][k-1];
                    else
                        cout << Keyboard[j][k+1];
                    break;
                }
            }
        }
    }
    return 0;
}
//Accepted :)