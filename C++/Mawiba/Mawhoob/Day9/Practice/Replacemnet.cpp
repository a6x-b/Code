#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin>>A[i];
        if (A[i]>0) A[i]=1;
        else if (A[i]<0)  A[i]=2; 
        cout<<A[i]<<" ";
    }
    
    return 0;
}
