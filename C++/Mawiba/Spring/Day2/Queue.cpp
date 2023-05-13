#include <iostream>
#include <deque>
#include "C:/Users/abdul/Documents/Code/C++/Runner/Runner.h"
using namespace std;
int main()
{
    Run(false);
    deque<int> MyDeque;
    int Queries, Parameter;
    string Command;
    cin >> Queries;
    while (Queries--)
    {
        cin >> Command;
        if (Command == "push_back")
        {
            cin >> Parameter;
            MyDeque.push_back(Parameter);
        }
        if (Command == "push_front")
        {
            cin >> Parameter;
            MyDeque.push_front(Parameter);
        }
        else if (Command == "pop_front")
            MyDeque.pop_front();
        else if (Command == "pop_back")
            MyDeque.pop_back();
        else if (Command == "front")
            cout << MyDeque.front() << endl;
        else if (Command == "back")
            cout << MyDeque.back() << endl;
        else if (Command == "print")
        {
            cin >> Parameter;
            cout << MyDeque[Parameter-1] << endl;
        }
    }
    return 0;
}