#include <iostream>
using namespace std;

int Similarity(string Text1, string Text2)
{
    int Similar = 0, FirMax = Text1.size(), SecMax = Text2.size(), Shortest = min(FirMax,SecMax);
    for (int i = 1; i <= Shortest; i++)
    {
        if(Text1[FirMax-i] == Text2[SecMax-i])
            Similar++;
    }
}

int main()
{
    string Text1, Text2;
    cin >> Text1 >> Text2;
    int Similar = Similarity(Text1,Text2);
    
    return 0;
}