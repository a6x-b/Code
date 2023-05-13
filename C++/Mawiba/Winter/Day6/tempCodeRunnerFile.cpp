#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, Case;
    cin >> N >> Case;
    int Arr[N];
    for (int i = 0; i < N; i++)
        cin >> Arr[i];
    sort(Arr,Arr+N);
    int Start, Mid, End;
    bool Found = false;

    for (int i = 0; i < N;i++)
    {

        Start = 0, End = N-1;
        while (Start <= End)
        {
            Mid = (Start+End)/2;
            if(Mid == i) break;
            if (Case - Arr[i] == Arr[Mid])
            {
                Found = true;
                break;
            }
            else if (Arr[Mid] > Case - Arr[i])
                End = Mid - 1;

            else if (Arr[Mid] < Case - Arr[i])
                Start = Mid + 1;
        }
    }
    if (Found)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
