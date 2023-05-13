#include <iostream>
#include "algorithm"
using namespace std;
/** A6X
* @brief A binary search function.
* @param Numbers Array.
* @param Digits Length of the array.
* @param Search_Value The value we're looking for.
* @return If the number is in the array or not.
**/
bool Bin_Srch(int* Numbers, int Digits ,int Search_Value)
{
    int Start = 0, End = Digits;
    int mid;
    while (Start <= End)
    {
        mid = (Start+Digits)/2;
        if (Numbers[mid] == Search_Value)
            return true;
        else if (Numbers[mid] > Search_Value)
            End = mid - 1;
        else
            Start = mid + 1;
    }
    return false;
}

int main()
{
    int Digits, Cases; cin >> Digits >> Cases;
    int Numbers[Digits];
    for (int i = 0; i < Digits; i++)
        cin >> Numbers[i];
    sort(Numbers,Numbers+Digits);
    while(Cases--)
    {
        int Value; cin >> Value;
        cout << ((Bin_Srch(Numbers, Digits, Value))? "found": "not found") << endl;
    }
    return 0;
}