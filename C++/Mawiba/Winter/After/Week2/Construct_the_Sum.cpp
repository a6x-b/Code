#include <bits/stdc++.h>
using namespace std;

int main()
{
    short Cases; cin >> Cases;
    int Numbers; long long Target_Sum;
    while (Cases--)
    {
        cin >> Numbers >> Target_Sum;
        if (Numbers*(Numbers+1)/2 < Target_Sum)
            cout << -1;
        else
        {
            if (Numbers == Target_Sum)
                cout << Target_Sum;
            
        }
        cout << "\n";
    }
    return 0;
}
