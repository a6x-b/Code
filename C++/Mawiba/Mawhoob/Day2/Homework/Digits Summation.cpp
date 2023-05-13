#include<iostream>
using namespace std;
int main()
{
    long long M,N;
    cin>>M>>N;
    int Digits = M%10 + N%10;
    cout<<Digits;
    return 0;
}