#include <iostream>
using namespace std;

int main()
{
    long long N,Sum = 0;
    cin >> N;
    for (long long i = 1; i*i <= N; i++)
    {
        if (N%i==0)
        {
            Sum +=i;
            if (i != N/i)
                Sum += N/i;
        }
    }
    cout << Sum;
    return 0;
}