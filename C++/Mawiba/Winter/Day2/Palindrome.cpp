#include <iostream>  
using namespace std;  
int main()  
{  
    int N, Reverse=0, rem, OG;    
    cin>>N;
    OG = N;    
        while(N!=0)    
        { 
            rem=N%10;      
            Reverse=Reverse*10+rem;    
            N/=10;    
        }    
    cout << Reverse << "\n";
        if (OG==Reverse)
            cout << "YES";
        else
            cout << "NO";
    return 0;  
}  