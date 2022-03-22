#include <iostream>
using namespace std;


//Only With One Array Solution

int main()
{
    // Arrays' Lengths
    int Seq_Len, Sub_Len;
    //Input Lengths
    cin >> Seq_Len >> Sub_Len;
    // Subsequence value
    int Input;
    //Input counter
    int IN_CNT = 0;
    // Subsequence values matchup
    int Counter = 0;
    int Sequence[Seq_Len];
    //Input Sequence array
    for (int i = 0; i < Seq_Len; i++)
        cin >> Sequence[i];
    cin >> Input;
    for (int i = 0; i < Seq_Len; i++)
    {
        if (Sequence[i] == Input)
        {
            Counter++;
            IN_CNT++;
        if (IN_CNT < Sub_Len)
            cin >> Input;
        }
    }
    cout << ((Counter == Sub_Len)? "YES": "NO");
    return 0;
}
