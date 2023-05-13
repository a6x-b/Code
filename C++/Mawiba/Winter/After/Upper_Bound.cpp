#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int Size; cin >> Size;
    int MyArr[Size];
    for(int i = 0;cin >> MyArr[i++];);
    sort(MyArr, MyArr+Size);

    int Start = 0, End = Size, mid, Search, Ans = -1; cin >> Search;
    while(Start<=End)
    {
        mid = (Start+End)/2;
        
        if (MyArr[mid] > Search)
        {
            Ans = mid;
            End = mid - 1;
        }
        else
            Start = mid + 1;
    }
    return 0;
}
