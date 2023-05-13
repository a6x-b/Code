#include <iostream>
using namespace std;

int main()
{
    int N;
    int Array[1000];
    cin>>N;
    for (int X = 0; X < N; X++)
    {
        cin>>Array[X];
    }
    cout<<"even: ";
    for (int Even = 0; Even < N; Even++)
    {
        if((Array[Even])%2==0)
        cout<<Array[Even]<<" ";
    }
    cout<<endl<<"odd: ";
    for (int Odd = 0; Odd < N; Odd++)
    {
        if(Array[Odd]%2!=0)
        cout<<Array[Odd]<<" ";
    }
    return 0;
}