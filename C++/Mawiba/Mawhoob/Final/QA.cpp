#include <iostream>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if (a==-1)cout<<c-b;
    else if (b==-1)cout<<c-a;
    else if (c==-1)cout<<a+b;
    return 0;
}