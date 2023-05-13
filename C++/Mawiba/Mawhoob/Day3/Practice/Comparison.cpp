#include <iostream>
using namespace std;

int main()
{
    int A,B;
    string S;
    cin>>A>>S>>B;
    if ((A >= -100 && A<=100) &&(B>=-100 && B<=100))
    {
        if (S == "<")
        {
            if (A < B)
            {
                cout<<"Right";
            }else{cout<<"Wrong";}
        }else if (S == ">")
        {
            if (A > B)
            {
                cout<<"Right";
            }else{cout<<"Wrong";}
            
        }else if (S == "=")
        {
            if (A == B)
            {
                cout<<"Right";
            }else{cout<<"Wrong";}
        }
    }
    return 0;
}