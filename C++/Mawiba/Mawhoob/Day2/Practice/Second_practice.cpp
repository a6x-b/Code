#include <iostream>
using namespace std;
int main(){
    int Age,Weight,Grp_Num;
    string Name;
    cout<<"Enter your name => ";
    cin>>Name;
    cout<<"Enter your Age => ";
    cin>>Age;
    cout<<"Enter your Weight => ";
    cin>>Weight;
    cout<<"Enter your Group number => ";
    cin>>Grp_Num;
    cout<<"Hello! My name is "<<Name<<", And i am "<<Age<<" years old."<<endl;
    cout<<"My weight is "<<Weight<<" KG. I study in group "<<Grp_Num;
    return 0;
}