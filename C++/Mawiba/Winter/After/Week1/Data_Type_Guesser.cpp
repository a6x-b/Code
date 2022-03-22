#include <bits/stdc++.h>
using namespace std;
int main ()
{
    double N, K, A;
    cin >> N >> K >> A;
    double Number = (N / A) * K;
    long long Lang = Number;
    if (Number - Lang > 0)
    {
        cout << "double";
        return 0;
    }
    if (Number > 2147483647)
    {
        cout << "long long";
    }
    else
    {
        cout << "int";
    }
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    double N,K,A;
    cin >> N >> K >> A;
    double Number = (N/A)*K;
    long long Lang = Number;
    if (Number - Lang > 0)
        cout << "double";
    else
    {
        if (Lang > INT_MAX)
            cout << "long long";
        else
            cout << "int";
    }
    return 0;
}*/