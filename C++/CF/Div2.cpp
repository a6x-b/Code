#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int Q, Sum = 0;
    string Command;
    cin >> Q;
    while (Q--)
    {
        cin >> Command;
        for (int i = 0; i < Command.size(); i++)
        {
            if (Command[i] == '-')
            {
                Sum--;
                break;
            }
            else if (Command[i] == '+')
            {
                Sum++;
                break;
            }
        }
    }
    cout << Sum;
    return 0;
}