#include <iostream>
using namespace std;

int main()
{
    int N;
    bool IsPalindrome = true;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0,t = N-1; i < N && t >= 0; i++,t--)
    {
        if (A[i] != A[t])
            IsPalindrome = false;
    }
    if (IsPalindrome)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
