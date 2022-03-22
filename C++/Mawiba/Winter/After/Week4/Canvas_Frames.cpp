#include <iostream>
using namespace std;

int main()
{
    int Stick, Sticks, Pairs = 0; cin >> Sticks;
    int Frequency_Sticks[100] = {};
    while(Sticks--)
    {
        cin >> Stick;
        Frequency_Sticks[Stick-1]++;
    }
    for (short i = 0; i < 100; i++)
        Pairs += (Frequency_Sticks[i]/2);
    cout << Pairs/2;
    return 0;
}