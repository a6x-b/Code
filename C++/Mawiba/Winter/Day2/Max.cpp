#include <iostream>
using namespace std;

int main()
{
    int Counter,Max = 0,Temp;
    cin >> Counter;
    for (int i = 0; i < Counter; i++)
    {
        cin >>Temp;
        if (Max < Temp)
            Max = Temp;
    }
    cout << Max;
    return 0;
}
