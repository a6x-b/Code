#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int L, R;
    cin >> L >> R;
    if (L == 0 && R == 0)
    {
        cout << "NO";
        return 0;
    }
    if(abs(L-R) > 1)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}