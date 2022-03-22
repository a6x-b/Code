#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Members, Mem_S; cin >> N >> Members;
    int Sizes[N];
    for (int i = 0; i < N;)
        cin >> Sizes[i++];
    sort(Sizes, Sizes+ N);
    while(Members--)
    {
        cin >> Mem_S;
        int ANS = lower_bound(Sizes, Sizes+N,Mem_S) - Sizes;
        if (ANS == N) cout << Sizes[ANS-1];
        else if (ANS == 0) cout << Sizes[ANS];
        else if (Mem_S - Sizes[ANS-1] < Sizes[ANS] - Mem_S)
            cout << Sizes[ANS-1];
        else
            cout << Sizes[ANS];
        cout << endl;
    }
    return 0;
}