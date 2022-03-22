#include <iostream>
using namespace std;
//C- Even Odd // 100 Points (Full)

int main()
{long long t,N;
    cin >> t;
    while(t--)
    {
        int Moves = 0, Evens = 0, Odds = 0; 
        cin >> N;
        long long Arr[N];
        for (long long i = 0; i < N; i++)
            {
                cin >> Arr[i];
                if (Arr[i]%2==0) Evens++;
                else Odds++;
            }
        if (N%2==0)
        {

            for (int i = 0; Odds > Evens && i < N; i++)
            {
                if (Arr[i]%2==1)
                {
                    Arr[i]--;
                    Moves++;
                    Odds--;
                    Evens++;
                }
            }

            for (int i = 0; Odds < Evens && i < N; i++)
            {
                if (Arr[i]%2==0)
                {
                    Arr[i]--;
                    Moves++;
                    Evens--;
                    Odds++;
                }
            }
            cout << Moves;
        }
        else cout << -1;
        cout << "\n";}
    return 0;
}
