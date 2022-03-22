#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long Eyes, Mouthes, Bodies, Souvenirs = 0, Minimum;
    cin >> Eyes >> Mouthes >> Bodies;
    while(Bodies > 0 && Eyes > 0)
    {
        Minimum = min(Eyes,Bodies);
        if (Mouthes > 0 && Bodies > 0)
        {
            Minimum = min(Minimum, Mouthes);
            Souvenirs += min(Eyes,min(Mouthes,Bodies));
            Eyes -= Minimum;
            Bodies -= Minimum;
            Mouthes -= Minimum;
        }
        else
        {
            Souvenirs += min(Eyes/2,Bodies);
            Eyes -= Minimum;
            Bodies -= Minimum;
        }
    }
    cout << Souvenirs;
}
