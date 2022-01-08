#include <iostream>
using namespace std;

int main()
{
    int Base,Counter = 0;
    cout<<"Enter the base ";
    cin>>Base;
    while (Counter<Base)
    {
        Counter++;
        for (int Stars = 0; Stars < Counter; Stars++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
    return 0;
}