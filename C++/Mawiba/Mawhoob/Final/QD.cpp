#include <iostream>
using namespace std;

int main()
{
    long long n,m,k,Counter=0;
    cin>>n>>m>>k;
    long long a[n],b[m],c[k];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < k; i++)
    {
        cin>>c[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int l = 0; l < k; l++)
            {
                if ((a[i]+b[j]+c[l])%3==0) Counter++;
            }
            
        }
        
    }
    cout<<Counter;
    return 0;
}
