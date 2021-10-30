#include <iostream>
using namespace std;

int main()
{
    float X,Y;
    cin>>X>>Y;
        if (X == 0 && Y == 0) cout<<"Origem";
        else if (X == 0 && Y != 0)cout<<"Eixo Y";
        else if (X != 0 && Y == 0)cout<<"Eixo X";
        else if (X>0.0){
            if (Y>0.0)cout<<"Q1";
            else if(Y<0.0) cout<<"Q4";
        }else if (X<0.0){
            if(Y>0.0)cout<<"Q2";
            else if(Y<0.0)cout<<"Q3";
        }
    return 0;
}