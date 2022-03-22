#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string Text;
    getline(cin, Text);
    vector<int> Sp_I;
    for (int i = 0; i < Text.size(); i++)
    {
        if (Text[i] == ' ')
            Sp_I.push_back(i);
    }
    cout << Sp_I.size();
    return 0;
}
