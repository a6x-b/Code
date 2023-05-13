#include <iostream>
using namespace std;

int main()
{
    int Row, Col;
    cin >> Row >> Col;
    char Grid[Row][Col];
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
            cin >> Grid[i][j];
    }
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (Grid[i][j] == 'o')
            {
                for (int c = i-1; c <= i+1; c++)
                {
                    for (int R = j-1; R <= j+1; R++)
                    {
                        if ((R >= 0 && R <= Row) && (c >= 0 && c <= Col))
                            if (Grid [c][R] != 'o' || (c == i && R == j))
                                Grid[c][R] = 'x';
                    }
                }
            }
        }
    }
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
            cout << Grid[i][j];
        cout << "\n";
    }
}