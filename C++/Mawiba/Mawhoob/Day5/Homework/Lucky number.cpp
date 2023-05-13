#include <iostream>
using namespace std;

int main()
{int Lucky;
    cin>>Lucky;
    if(Lucky%10==0) cout<<"YES";
    else if ((Lucky/10)%(Lucky%10)==0||(Lucky%10) % (Lucky/10)==0) cout<<"YES"; else cout<<"NO";
    return 0;
}