#include <iostream>
using namespace std;

int main()
{
    long long N,Search;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    cin >> Search;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == Search)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}