#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    long long a[n][m],b[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>b[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] % b[i][j] !=0 && a[i][j]*-1 != a[i][j]){
                cout<<"NO";
                return 0;
            }
        }
        
    }
    cout<<"YES";
    return 0;
}
