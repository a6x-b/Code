#include <iostream>
using namespace std;
int main()
{
    unsigned long long l,r,x,Divisables;
    cin>>l>>r>>x;
    Divisables =r/x-l/x;
    if(l%x==0) Divisables++;
    if(Divisables>0) cout<<"YES";
    else cout<<"NO";
    /*for (l = max(l,x); l <= r; l++)
    {
        if(l%x==0) {cout<<"YES"; break;}
        else if(l%x!=0&&l==r) cout<<"NO";
    }*/
    return 0;
}