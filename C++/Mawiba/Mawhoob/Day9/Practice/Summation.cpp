#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int Numbers[N+1];
    long long Number=0;
    for (int Index = 0; Index < N; Index++)
    {
        cin>>Numbers[Index];
        Number+=Numbers[Index];
    }
    cout<<abs(Number);
    return 0;
}