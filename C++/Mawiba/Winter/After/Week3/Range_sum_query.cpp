#include <iostream>
using namespace std;

int main()
{
    int Size, Querries;
    cin >> Size >> Querries;
    int TEMP, Frequency[Size+1] = {0};
    for (int i = 1; i <= Size; i++)
    {
        cin >> TEMP;
        Frequency[i] = TEMP + Frequency[i-1];
    }
    int L, R;
    while (Querries--)
    {
        cin >> L >> R;
        cout << (Frequency[R]-Frequency[L-1]) << endl;
    }
    return 0;
}