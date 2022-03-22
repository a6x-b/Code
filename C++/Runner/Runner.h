#include <iostream>
#include <fileapi.h>
using namespace std;
void Run(bool Output_in_file)
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL); 
    #ifndef ONLINE_JUDGE
        freopen("C:/Users/abdul/Documents/Code/C++/Runner/Input.txt","r",stdin);
        if(Output_in_file)
            freopen("C:/Users/abdul/Documents/Code/C++/Runner/Output.txt", "w", stdout);
    #endif
}