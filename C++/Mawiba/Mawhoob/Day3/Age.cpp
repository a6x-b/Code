#include <iostream>
using namespace std;
int main(){
    int Age;
    cout<<"Age: ";
    cin>>Age;
    if (Age <= 20) {
        cout<<"Young lad";
    } else if (Age > 20 && Age < 60) {
        cout<<"Adult";
    } else if (Age >= 60) {
        cout<<"Old chap";
    }
    return 0;
}