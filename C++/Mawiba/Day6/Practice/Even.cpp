#include <iostream>
using namespace std;

int main()
{
    int start = 2;
    int End;
    cin>>End;
    if (End != 1)
    {
        for (int i = 0; i <= End; i+=2)
    {
        cout<<i<<endl;
    }}
    else cout<<-1;
    
    return 0;
}