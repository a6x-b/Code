#include <iostream>
using namespace std;

int main()
{
    int Input;
    cin >> Input;
    while (Input != 1999)
    {
        cout << "Wrong" << endl;
        cin >> Input;
    }
    cout << "Correct";
    return 0;
}
