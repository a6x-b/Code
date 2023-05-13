#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int Size, Queries;
    string Command, Text;
    cin >> Size >> Queries;
    cin >> Text;

    int L, W;
    char X;
    while (Queries--)
    {
        cin >> Command;
        bool Needed_To_Output = 0;
        if (Command == "pop_back")
            Text.pop_back();
        else if (Command == "front")
            {cout << Text.front(); Needed_To_Output = true;}
        else if (Command == "back")
            {cout << Text.back(); Needed_To_Output = true;}
        else if (Command == "sort")
        {
            cin >> L >> W;
            if (L > W)
                swap(L, W);
            sort(Text.begin()+L-1,Text.begin()+W);
        }
        else if (Command == "reverse")
        {
            cin >> L >> W;
            if (L > W)
                swap(L, W);
            reverse(Text.begin()+L-1,Text.begin()+W);
        }
        else if (Command == "print")
        {
            cin >> W; cout << Text[W-1];
            Needed_To_Output = true;
        }
        else if (Command == "substr")
        {
            cin >> L >> W;
            if (L > W) 
                swap(L, W);
            cout << Text.substr(L-1,W);
            Needed_To_Output = true;
        }
        else if (Command == "push_back")
        {
            cin >> X;
            Text.push_back(X);
        }
        if (Needed_To_Output)
            cout << endl;
    }
        return 0;
}
