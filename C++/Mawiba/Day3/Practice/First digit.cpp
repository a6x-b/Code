#include <iostream>
using namespace std;
int main(){
    long Number;
    cin>>Number;
    if (Number >= 999 && Number <= 9999){
        if ((Number/1000)% 2 == 0)
        {
            cout<<"EVEN";
        }else{
            cout<<"ODD";
            }
    }
    return 0;
}