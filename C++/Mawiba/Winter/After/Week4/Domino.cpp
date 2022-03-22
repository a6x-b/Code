#include <iostream>
using namespace std;

int main()
{
    int Input, Dominos; cin >> Dominos;
    int Uppers = 0, Lowers = 0;
    while(Dominos--)
    {
        cin >> Input;
        Uppers += Input;
        cin >> Input;
        Lowers += Input;
    }
    if(Uppers%2==0 && Lowers%2==0)
        cout << 0;
    else if (Uppers%2==1 && Lowers%2==1)
        cout << 1;
    else
        cout << -1;
    return 0;
}