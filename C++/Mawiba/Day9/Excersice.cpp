#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int Array[N];
    for (int Number = 0; Number < N; Number++)
    {
        cin>>Array[Number];
    }
    for (int Reverse = N-1; Reverse >= 0; Reverse--)
    {
        cout<<Array[Reverse]<<" ";
    }
    
    return 0;
}
