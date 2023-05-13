#include <iostream>
using namespace std;
int main()
{
    bool IsPrime = true;
    long long N;
    cin >> N;
    if (N == 1)
    {
        cout << "NO";
        return 0;
    }

    for (long long  i = 2; i*i <= N; i++)
    {
        if (N%i == 0)
        {
            IsPrime = false;
            break;
        }
    }
    if (IsPrime)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
