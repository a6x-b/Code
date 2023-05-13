/*#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned int A, C;
    unsigned long long B, D;
    cin >> A >> B >> C >> D;
    A = pow(A,B), C = pow(C,D);
    (A > C)? cout << "YES": cout << "NO";
    return 0;
}*/
#include <iostream>
#define LL long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    LL Result1, Result2, A, B, C, D;
    cin>>A>>B>>C>>D;
    Result1 = 1; Result2 = 1;
    for(int i=1;i<=B; i++)
        Result1 = A % ( int(1e9) + 7) *  Result1 % ( int(1e9) + 7);
    for(int i=1;i<=D; i++)
        Result2 = C % ( int(1e9) + 7) *  Result2 % ( int(1e9) + 7);
    cout<<(Result1>Result2 ? "YES" : "NO");
    return 0;
}