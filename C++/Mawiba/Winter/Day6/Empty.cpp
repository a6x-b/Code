#include <iostream>
#include <algorithm>
using namespace std;
/*
Input
{
N: Numbers/ Array Size
Arr[i]: Value in array
t: Test cases
Case: Test case
}
*/
int main()
{
    /*
    int N, Case;
    cin >> N >> Case;
    int Arr[N];
    for (int i = 0; i < N; i++)
        cin >> Arr[i];
    sort(Arr,Arr+1);
    int Start = 0, Mid, End = N-1;
    bool Found = false;
    for (int i = 0; i < N;i++)
    {
        while (Start <= End)
        {
            Mid = (Start+End)/2;
            if (Case - Arr[i] == Arr[Mid] && Mid != i)
            {
                Found = true;
                break;
            }
            else if (Arr[Mid] > Case - Arr[i])
                End = Mid - 1;
 
            else if (Arr[Mid] < Case - Arr[i])
                Start = Mid + 1;
            cout << "Loop " << i+1 << endl;
        }
    }
    if (Found)
        cout << "YES";
    else
        cout << "NO";*/
 
 
 
 
 
 
/*    // n: Shops //x: Prices //q: Days
    int Shops , Days;
    int Prices[Shops], Coins;
    cin >> Shops;
    for (int i = 0; i < Shops; i++)
        cin >> Prices[i];
    cin >> Days;
    while (Days--)
    {
    int Start = 0, End = Shops-1, Mid, Ans = Shops;
        cin >> Coins;
        while (Start <= End)
        {
            Mid = (Start + End)/2;
            if (Shops[Mid] > Coins)
            {
                Ans = Mid;
                End = Mid - 1;
            }
            else cout << Mid;
        }
    }*/
    /* 
    int Array_Size, Queries;
    cin >> Array_Size >> Queries;
    int Array[Array_Size];
    for (int i = 0; i < Array_Size; i++)
        cin >> Array[i];
    while (Queries--)
    {
        int Query, Ans = 0, Start = 0, End = Array_Size , Mid;
        int Greater = 0, Less = 0;
        //Counters
        cin >> Query;
        while (Start <= End)
        {
            Mid = (Start + End)/2;
            if (Array[Mid] > Query)
                End = Mid - 1;
            else if (Array[Mid] < Query)
                Start = Mid + 1;
            else
            {
                for (int i = Mid; Mid >= 0; i--)
                {
                    
                }
            }
        }
    }*/
    return 0;
}
