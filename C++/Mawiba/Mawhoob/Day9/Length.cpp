#include <iostream>
using namespace std;

int main()
{
    int N,Characters;
    cin>>N;
    char Name[N];
    for (int Character = 0; Character < N; Character++)
    {
        cin>>Name[Character];
        if (Name[Character]!='\0')
        Characters++;
        else break;
    }
    cout<<Characters;
    return 0;
}
