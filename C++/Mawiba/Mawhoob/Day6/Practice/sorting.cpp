#include <iostream>
using namespace std;

int main()
{
    int X,N;
    int pos=0,neg=0,even=0,odd=0;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        cin>>X;
        if (X%2==0) even++;
        else odd++;
        if (X>0) pos++;
        else if (X<0) neg++;
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
    return 0;
}