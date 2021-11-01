#include <iostream>
using namespace std;
int main()
{
    bool IsPrime = true;
    int N;
    cin>>N;
    for (int i = 2; i < N; i++)
    {
        if  (N%i==0) {
            IsPrime = false;
            break;
        }
    }
if (IsPrime) cout<<"YES";
else cout<<"NO";
    return 0;
}