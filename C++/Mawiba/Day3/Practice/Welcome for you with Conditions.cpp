#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin>>A>>B;
    if ((A >= 0 && A <= 100) && (B >= 0 && B <= 100)){
        if (A > B || A == B)
        {
            cout<<"Yes";
        } else
        {
            cout<<"No";
        }
        
        
    }
    return 0;
}