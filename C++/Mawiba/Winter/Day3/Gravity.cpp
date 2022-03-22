#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++)
    {
        int Minimum_Index = i;
        for (int j = i + 1; j < N; j++)
        {
            if (A[j] < A[Minimum_Index])
                Minimum_Index = j;
        }
        swap(A[i],A[Minimum_Index]);
    }
    for (int i = 0; i < N; i++)
        cout << A[i] << " ";
    return 0;
}