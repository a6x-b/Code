#include <iostream>
using namespace std;

int main()
{
    int N,Ones=0;
    cin>>N;
    while(N!=0){
        if(N%2==1)
        Ones++;
        N/=2;
    }
    cout<<Ones;
    return 0;
}
