#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Shops, Days; cin >> Shops;
    int Prices[Shops];
    for (int i = 0; i < Shops;)
        cin >> Prices[i++];
    sort(Prices,Prices+Shops);
    cin >> Days;
    int ANS;
    while(Days--)
    {
        int Coins; cin >> Coins;
        ANS = upper_bound(Prices,Prices+Shops,Coins) - Prices;
        cout << ANS << endl;
    }
    return 0;
}