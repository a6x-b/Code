#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    for (int rows = 1; rows <= N; rows++)
    {
        for (int spaces = (N-rows); spaces > 0; spaces--)
        {
            cout<<' ';
        }
        for (int stars = 1; stars <= (2*rows-1); stars+=1)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}