#include <bits/stdc++.h>
#define LL long long
using namespace std;
// Author: A6X

int Twos(long long Number)
{
    int twos = 0;
    while(Number%2==0)
    {
        Number/=2;
        twos++;
    }
    return twos;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    LL Input; int Length; cin >> Length;
    int Max_Div = 0;
    while(Length--)
    {
        cin >> Input;
        Max_Div = max(Max_Div,Twos(Input));
    }
    cout << Max_Div;
    return 0;
}
// do array --
// store values --
// div each one by 2 --
// then store the max in a variable --