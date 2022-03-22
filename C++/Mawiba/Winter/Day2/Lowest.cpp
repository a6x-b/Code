#include <iostream>
using namespace std;

int main()
{
    int N, Lowest = 1001, Low_Index;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++)
    {
        if (A[i] < Lowest)
        {
            Lowest = A[i];
            Low_Index = i;
        }
    }
    cout << Lowest << " " << Low_Index+1;
    return 0;
}