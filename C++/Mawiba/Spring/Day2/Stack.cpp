#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> MyStack;
    int Queries, Parameter;
    string Command;
    cin >> Queries;
    while (Queries--)
    {
        cin >> Command;
        if (Command == "push")
        {
            cin >> Parameter;
            MyStack.push(Parameter);
        }
        else if (Command == "pop")
            MyStack.pop();
        else if (Command == "top")
            cout << MyStack.top() << endl;
    }
    return 0;
}
