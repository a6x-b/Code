#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int Col, Rows;
    cin >> Col >> Rows;
    if (min(Col,Rows)%2)
        cout << "Akshat";
    else
        cout << "Malvika";
}