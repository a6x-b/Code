#include <iostream>
using namespace std;

int main()
{
    long long Cup_Number;
    cin >> Cup_Number;
    cout << ( (Cup_Number*(Cup_Number+1)) / 2 ) - Cup_Number+1;
    return 0;
}