#include <iostream>
using namespace std;

int main()
{
    char X;
    cin>>X;
    if (X<='Z'&&X>='A')
    cout<<char(X+32);
    if (X<='z'&&X>='a')
    cout<<char(X-32);
    return 0;
}
