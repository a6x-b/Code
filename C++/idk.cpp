#include <iostream>
using namespace std;

int main()
{
    int N,Minimum,Index;
    cin>>N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < N; i++)
    {
        if(i==0) Minimum=A[i];
        else if (Minimum>A[i]){ Minimum=A[i]; Index = i;}
        if(i+1==N) Index = i;
    }
    
    return 0;
}
