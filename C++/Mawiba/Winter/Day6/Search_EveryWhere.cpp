#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, Queries, Search;
    cin >> N >> Queries;
    int Arr[N];
    for (int i = 0; i < N; i++)
        cin >> Arr[i];
    sort(Arr,Arr+N);
    int Start, Mid, End;

    while (Queries--)
    {
        bool Found = false;
        cin >> Search;
        Start = 0, End = N-1;
        while (Start <= End)
        {
            Mid = (Start+End)/2;
            
            if (Search == Arr[Mid])
            {
                Found = true;
                break;
            }
            else if (Arr[Mid] > Search)
                End = Mid - 1;

            else if (Arr[Mid] < Search)
                Start = Mid + 1;
        }
    (Found)? cout << "found": cout << "not found";
    cout << "\n";
    }
    return 0;
}
