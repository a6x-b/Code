#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int Numbers, Elements, Sum = 0;
    int Oray[Numbers];
    cin >> Numbers >> Elements;
    for (int i = 0; i < Numbers; i++)
        cin >> Oray[i];
    sort(Oray,Oray+Numbers,greater <int>());
    for (int i = 0; i < Elements; i++)
        Sum += Oray[i];
    cout << Sum;
    return 0;
}