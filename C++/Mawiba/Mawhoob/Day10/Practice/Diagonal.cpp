#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N,Main=0,Secondary=0;
    cin>>N;
    int Array[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N ; j++)
        {
                cin>>Array[i][j];
                if (i==j) Main += Array[i][j];
                else if (i+j==N-1) Secondary += Array[i][j];
        }
    }
    cout<<abs(Main-Secondary);
    return 0;
}