#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    //8451
    int Min = 10, Max = 0;
    while(input != 0)
    {
        //Max = 8
        if (input%10 > Max)
            Max = input%10;
        // Min = 1;
        if (input%10 < Min)
            Min = input%10;
        input /= 10;
    }
    if (Max - Min == 4 || Max - Min == 7)
        cout << "YES";
    else cout << "NO";
    return 0;
}