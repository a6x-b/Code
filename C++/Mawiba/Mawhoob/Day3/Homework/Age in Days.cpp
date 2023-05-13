#include <iostream>
using namespace std;

int main()
{
    int Days;
    cin>>Days;
    cout<<Days/365<<" years"<<endl;
    Days = Days - ((Days/365)*365);
    cout<<Days/30<<" months"<<endl;
    Days = Days - ((Days/30)*30);
    cout<<Days<<" days";
    return 0;
}
