#include <iostream>
using namespace std;

int main()
{
    int N,Max;
    cin>>N;
    int Num_Arr[N][N];
    for (int i = 0; i < N; i++)
    {
        cout<<"Row "<<i+1<<": ";
        for (int j = 0; j < N; j++)
        {
            cin>>Num_Arr[i][j];
            if(i==0&&j==0) Max=Num_Arr[i][j];
            if (Num_Arr[i][j]>Max) 
            Max = Num_Arr[i][j];
        }
        
    }
    cout<<"Maximum is "<<Max;
    return 0;
}
