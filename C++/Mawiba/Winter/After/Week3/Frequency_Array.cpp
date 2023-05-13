#include <iostream>
using namespace std;

int main()
{
    int Numbers, Appearance;
    cin >> Numbers >> Appearance;
    int Dir[Appearance] = {};
    while(Numbers--)
    {
        int Temp; cin >> Temp;
        Dir[Temp-1]++;
    }
    for (int i = 0; i < Appearance;i++)
        cout << Dir[i] << endl;
    return 0;
}
