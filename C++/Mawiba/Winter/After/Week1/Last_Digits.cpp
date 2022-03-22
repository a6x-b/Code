#include <iostream>
using namespace std;

int main()
{
    long long A,B,C,D;
    cin >> A >> B >> C >> D;
    long long Result = (A%100) * (B%100) * (C%100) * (D%100);
    if (Result%100 < 10)
        cout << '0';
    cout << Result%100;
    return 0;
}
