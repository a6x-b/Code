#include<bits/stdc++.h>
using namespace std;
int
main ()
{
 int n,k;
 cin>>n>>k;
 int arr[1005],freq[1005]={},p=1;
 for(int i=2,o=0;i<1005;i++)
 {
 
  bool prime=true;
       for(int j=2;j<i;j++) 
             {
              if(i%j==0)
              prime = false;
              }
 
            if (prime==true)
                {
                arr[o]=i;
                o++;
                p++;
                freq[i]++;
                }
}
 
 
int g=0;
for(int i=0;i<p-1;i++)
{
int r=arr[i]+arr[i+1]+1;
if(r>n)
break;
if (freq[r]>0 && r<=n)
g++;
}
if(g>=k)
cout<<"Yes";
else cout<<"No";
}