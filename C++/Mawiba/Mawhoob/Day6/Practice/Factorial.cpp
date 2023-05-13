#include <iostream>
using namespace std;
int main()
{
    int T,N;
    long long Number = 1;
    cin>>T;
    for (int Numbers = 0; Numbers < T; Numbers++)
    {
        cin>>N;
        Number = 1;
        for (int Factorial = 1; Factorial <= N; Factorial++)
        {
            Number*=Factorial;
        }
        cout<<Number<<endl;
    }
    return 0;
}