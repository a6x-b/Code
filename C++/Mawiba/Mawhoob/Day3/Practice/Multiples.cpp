#include <iostream>
using namespace std;

int main()
{
    int A,B;
    cin>>A>>B;
    if ((A >= 1 && A <= 1000000) && (B >= 1 && B <= 1000000))
    {
        if ((A%B==0) || (B%A==0))
        {
            cout<<"Multiples";
        }else {cout<<"No Multiples";}
        
    }
    
    return 0;
}
