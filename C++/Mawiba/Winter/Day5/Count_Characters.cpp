#include <iostream>
using namespace std;

int main()
{
    int Cap_Freq[26] = {};
    int Small_Freq[26] = {};
    string S;
    cin >> S;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] >= 'A' && S[i] <= 'Z')
        
            Cap_Freq[S[i]-'A']++;
        
        
        else if (S[i] >= 'a' && S[i] <= 'z')
            Small_Freq[S[i]-'a']++;
    }
    for (int i = 0; i < 52 ;i++)
    {
        if (i < 26)
        {    
            if (Cap_Freq[i] > 0)
                cout << char(i+'A') << " " << Cap_Freq[i] << "\n";
        }
    
        else if(i >= 26)
        {
            if (Small_Freq[i-26] > 0)
                cout << char(i-26+'a') << " " << Small_Freq[i-26] << "\n";
        }
    }
    return 0;
}
