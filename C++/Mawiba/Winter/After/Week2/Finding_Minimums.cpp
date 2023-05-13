#include <bits/stdc++.h>
using namespace std;

// Author = "A6X"

int GroupRange(double GroupSize, double Numbers)
{
    int X = Numbers/GroupSize;
    if (X == Numbers/GroupSize)
        return X;
    return X+1;
}

int main()
{
    double Numbers, Group_Size;
    cin >> Numbers >> Group_Size;
    int Groups = GroupRange(Group_Size,Numbers);
    int Inputs = 0,  Value;
    for (int i = 0; i < Groups; i++)
    {
        int Group_Inputs = 0;
        int Min = INT_MAX;
        for (; Inputs < Numbers && Group_Inputs < Group_Size; Inputs++, Group_Inputs++)
        {
            cin >> Value;
            Min = min(Min,Value);
        }
        cout << Min << " ";
    }
    return 0;
}