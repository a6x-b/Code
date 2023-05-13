#include <iostream>
using namespace std;

int main()
{
    char X;
    cin>>X;
    if (int(X) >= 48 && int(X) <= 57)cout<<"IS DIGIT";
    else if (int(X) >= 65 && int(X) <= 90)cout<<"ALPHA"<<endl<<"IS CAPITAL";
    else if (int(X) >= 97 && int(X) <= 122)cout<<"ALPHA"<<endl<<"IS SMALL";
    return 0;
}