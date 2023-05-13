#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;
    cout << A.size() << ' ' << B.size() << endl;
    cout << A + B << endl;
    short F = A[0] + B[0];
    A[0] = F - A[0];
    B[0] = F - B[0];
    cout << A << ' ' << B;
    return 0;
}
