#include <iostream>
using namespace std;

int main()
{
    int Search, N, Index = -1,Lowest;
    cin >> N;
    int A[N];
    for (int i = 0; i<N ; i++)
    cin >> A[i];
    cin >> Search;
    for (int i = 0; i < N; i++)
    {
        if (Search == A[i])
        {
            Lowest = A[i];
            Index = i+1;
            break;
        }
    }
    cout << Index;
    return 0;
}
