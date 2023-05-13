#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    short Q;
    cin >> Q;
    while (Q--)
    {
        int a,b;
        cin >> a >> b;
        while (a != b)
        {
            if (a<b)
                a = (a^b);
        }
        cout << (a^b);
    }
    return 0;
}