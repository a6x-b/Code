#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> sold;
    vector<int> price;
    vector<string> iden;
    float x;
    int y;
    string s;
    while(1)
    {
        cout<<"=======item=========="<<endl;
        cout<<"Item identification: ";
        getline(cin,s);
        if(s=="done")
        {
            break;
        }
        else if(s.size()>=3)
        {
            iden.push_back(s);
        }
        else
        {
            cout<<"Item identification should be at least 3 characters long"<<endl;
            continue;
        }
        cout<<"Qty sold: ";
        
        cin>>x;
        if(x-int(x)==0 && x>0)
        {
            sold.push_back(x);
        }
        else
        {
            cout<<"Quantity should be an integer value"<<endl;
            continue;
        }
        cout<<"Item price:";
        cin>>y;
        if(y>0)
        {
            price.push_back(y);
        }
        else
        {
            cout<<"Item price should be a numerical value"<<endl;
            continue;
        }
    }
    return 0;
}