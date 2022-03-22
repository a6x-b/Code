#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int Total = 0, Input, Input_Numbers;
    cin >> Input_Numbers;
    for (int i = 0; i < Input_Numbers; i++)
    {
        cin >> Input;
        Total +=Input;
    }
    cout << abs(Total);
    return 0;
}