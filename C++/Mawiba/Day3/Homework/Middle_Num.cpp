#include <iostream>
using namespace std;

int main()
{
    int X,Y;
    cin>>X>>Y;
    if ((X >= 120 && X <= 999) && (Y >= 0 && Y <= 1000))
    {
        cout<<X - (20+Y);
    }
    
    return 0;
}