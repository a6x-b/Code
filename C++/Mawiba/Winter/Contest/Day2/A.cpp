#include <iostream>
#include <algorithm>
using namespace std;

//A- The Smallest One // 55 Points / 100
int main()
{
    int Numbers, Search, Divisors = 0;
    int Intger;
    cin >> Numbers >> Search;
    int Array[100000] = {};
    for (int i = 0; i < Numbers; i++)
    {
        cin >> Intger;
        for (int j = 1; j*j <= Intger; j++)
        {
            if (Intger%j==0)
            {
                Array[Divisors] = j;
                if (Intger/j != j)
                {
                    Array[Divisors+1] = Intger/j;
                    Divisors+=2;
                }
                else
                    Divisors++;
            }
        }
    }
    sort (Array, Array+Divisors);
    cout << Array[Search-1];
    return 0;
}
