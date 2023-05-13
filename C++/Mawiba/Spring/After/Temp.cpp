#include <iostream>
using namespace std;

class Element
{
public:
    string name;
    string Symbol;
    int equivalence;
};

int main()
{
    Element A = {"sa", "S", 2};
    cout << A.equivalence;
    return 0;
}
