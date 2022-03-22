#include <iostream>
using namespace std;

int main()
{
    int Base;
    cout<<"Enter the base ";
    cin>>Base;
    for (int Counter = 0; Counter<Base;Counter++)
    {
        for (int Stars = 0; Stars < Counter; Stars++)
            cout<<"*";
    cout<<endl;
    }
    return 0;
}