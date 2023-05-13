#include <iostream>
using namespace std;

int main()
{
    int N, Lowest = 100001, Frequency = 0, Temp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> Temp;
        if (Temp == Lowest)
            Frequency++;

        if (Temp < Lowest)
        {
            Lowest = Temp;
            Frequency = 1;
        }
    }
    if (Frequency%2==1)
        cout << "Lucky";
    else
        cout << "Unlucky";
    return 0;
}