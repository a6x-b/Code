#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 2; i <= N; i+=2)
    {

        if (i%2==1)
        continue;
        cout << i << endl;
    }
    if (N/2==0)
    {
        cout << -1;
    }
    return 0;
}
