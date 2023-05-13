#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    for (int rows = 0; rows < N; rows++)
    {
        for (int stars = N; stars > rows; stars--)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    
    return 0;
}
