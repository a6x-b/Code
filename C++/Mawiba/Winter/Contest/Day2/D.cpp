#include <iostream>
using namespace std;
//D- Apples And Bananas // 50 Points (Full)

int main()
{
    long long Apples, Bananas;
    cin >> Apples >> Bananas;
    if (Apples/10 > Bananas/10)
        cout << "Apples";
    else if (Apples/10 < Bananas/10)
        cout << "Bananas";
    else cout << "Any";

    return 0;
}
