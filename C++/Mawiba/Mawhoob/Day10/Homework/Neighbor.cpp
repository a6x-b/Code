#include <iostream>
using namespace std;

int main()
{
    int N,M,X,Y;
    cin>>N>>M;
    char A[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin>>A[i][j];
        }
    }
    cin>>X>>Y;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (i!=1&&j!=1){
                if (A[X-i][Y-j]=='.'){
                    cout<<"no";
                    return 0;
                } else if (i==2 && j == 2){
                    cout<<"yes";
                    return 0;
                }
            }
        }
    }
    return 0;
}