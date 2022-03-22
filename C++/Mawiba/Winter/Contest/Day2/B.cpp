#include <iostream>
using namespace std;

//B- Divison Queries // 80 Points / 100
int main()
{
    int Size, Numbers, Queries;
    cin >> Queries;
    while(Queries--)
    {
        cin >> Size >> Numbers;
        int Number;
        bool Binary[Size];
        memset(Binary,0,Size);
        while (Numbers--)
        {
            cin >> Number;
            for (int i = Number; i <= Size; i += Number)
                Binary[i-1] = 1;
        }
        for (int i = 0; i < Size; i++)
            cout << Binary[i] << " ";
        cout << endl;
    }
    return 0;
}
