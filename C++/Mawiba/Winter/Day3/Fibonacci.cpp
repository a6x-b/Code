#include <iostream>
using namespace std;

int main()
{
    int n1,n2=1,n3=0, N, counter=0;
    cin >> N;
    if (N == 1)
        cout << 0;
    else if (N == 2)
        cout << 1;
    else if (N > 2)
    {
        for (int i = 0; n1 != N ; i++)
        {
                n1 = n2 + n3;
                n3 = n2;
                n2 = n1;
                counter = i;
        }
        cout << counter;

    }
    return 0;
}