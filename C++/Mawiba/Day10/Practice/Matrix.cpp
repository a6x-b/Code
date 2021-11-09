#include <iostream>
using namespace std;

int main()
{
    int N,M,X;
    cin>>N>>M;
    int Array[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin>>Array[i][j];
        }
        
    }
    cin>>X;
    bool found=false;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (X==Array[i][j]){
                found = true;
                break;
            }
        }
        
    }
    if (found) cout<<"will not take number";
    else cout<<"will take number";
    return 0;
}
