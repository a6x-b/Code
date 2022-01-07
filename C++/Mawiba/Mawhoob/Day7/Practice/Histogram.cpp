#include <iostream>
using namespace std;

int main()
{
    int N,X;
    char S;
    cin>>S>>N;
    for (int i = 0; i < N; i++)
    {
        cin>>X;
        for (int j = 0; j < X; j++)
        {
            cout<<S;
        }cout<<endl;
    }
    
    return 0;
}
