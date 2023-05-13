#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int Yakko, Wakko; cin >> Yakko >> Wakko;
    int MAX = max(Yakko,Wakko);
    if (MAX == 1)
        cout << "1/1";
    else if (MAX == 2)
        cout << "5/6";
    else if (MAX == 3)
        cout << "2/3";
    else if (MAX == 4)
        cout << "1/2";
    else if (MAX == 5)
        cout << "1/3";
    else if (MAX == 6)
        cout << "1/6";
    else
        cout << "0/1";
    return 0;
}
