#include <iostream>
using namespace std;

int main()
{
    int n,Shortest,Tallest,Height;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>Height;
        if (i==0)
        {
            Shortest=Height;
            Tallest=Height;
        }
        if (Height>Tallest) Tallest = Height;
        else if (Height<Shortest) Shortest=Height;
    }
    cout<<Tallest-Shortest;
    return 0;
}