#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 3;
    a += b;
    b = a - b;
    a -= b;
    cout << "a= " << a << "\n";
    cout << "b= " << b << "\n";
    
    return 0;
}
