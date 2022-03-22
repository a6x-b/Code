#include <iostream>
using namespace std;

int main()
{
    // Row => N     Col => M
    int Row,Col,Search;
    bool Exists = false;
    cin >> Row >> Col;
    int Matrix[Row][Col];
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
            cin >> Matrix[i][j];
    }

    cin >> Search;

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (Matrix[i][j] == Search)
                Exists = true;
        }
    }
    if (Exists)
        cout << "will not take number";
    else
        cout << "will take number";
    return 0;
}
