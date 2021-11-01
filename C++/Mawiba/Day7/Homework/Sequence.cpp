#include <iostream>
using namespace std;

int main()
{
    int N,M;
    bool Entered = false;
    while (true)
    {
        cin>>N>>M;
        if (N>0&&M>0)
        {
            Entered =false;
            int total = 0;
            if (!Entered&&N<=M)
            {
                while (N<=M)
                {
                    cout<<N<<" ";
                    total+= N++;
                }
                cout<<"sum ="<<total<<endl;
                Entered = true;
            }
            else if (!Entered&&M<=N)
            {
                while (M<=N)
                {
                    cout<<M<<" ";
                    total+= M++;
                }
                cout<<"sum ="<<total<<endl;
                Entered = true;
            }
        } 
        else break;
    }
    return 0;
}
