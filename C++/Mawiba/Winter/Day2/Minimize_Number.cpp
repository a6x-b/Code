#include <iostream>
using namespace std;

int main()
{
    int N, Div_count = 0;
    bool AllIsEven = true;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    while (AllIsEven)
    {
        for (int i = 0; i < N; i++)
        {
            if(A[i]%2==0){
                A[i] /= 2;
                Div_count++;
            }
            else
            {
                AllIsEven = false;
                break;
            }
        }
    }
    Div_count /= N;
    cout << Div_count;
    return 0;
}