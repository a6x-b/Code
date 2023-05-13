#include <iostream>
using namespace std;

int main()
{
    int N,Temp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> Temp;
        if (Temp <= 10)
        {
            cout << "A[" << i << "]" << " = " << Temp << "\n";
        }
        
    }
    
    return 0;
}
