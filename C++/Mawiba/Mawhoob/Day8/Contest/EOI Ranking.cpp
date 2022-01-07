#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    
        int Score,TotalA=0,TotalB=0;
        for (int i = 0; i < N; i++)
        {
            cin>>Score;
            TotalA+=Score;
        }
        for (int i = 0; i < N; i++)
        {
            cin>>Score;
            TotalB+=Score;
        }
        if (TotalA==TotalB)
        {
            cout<<"Tie";
        }
        else if (TotalA>TotalB)
        {
            cout<<"Kid A";
        }
        else if (TotalA<TotalB)
        {
            cout<<"Kid B";
        }
    return 0;
}
