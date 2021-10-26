#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(9);
    float R;
    float Pi = 3.141592653;
    cin>>R;
    float Area = Pi * R * R;
    cout<<Area;
    return 0;
}