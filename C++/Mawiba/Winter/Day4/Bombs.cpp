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
                //up
                if (i > 0)
                {
                    //left
                    if (j > 0)
                        Grid[i-1][j-1] = 'x';
                    //center
                    Grid[i-1][j] = 'x';
                    //right
                    if (j < Col-1)
                        Grid[i-1][j+1] = 'x';
                }
                //middle:

                //left
                if (j > 0)
                    Grid[i][j-1] = 'x';
                //center
                Grid[i][j] = 'x';
                //right
                if (j < Col-1 && Grid[i][j+1] != 'o')
                    Grid[i][j+1] = 'x';
                
                
                //down
                if(i < Row-1)
                {
                    //left
                    if (j > 0 && Grid[i+1][j+1] != 'o')
                        Grid[i+1][j-1] = 'x';
                    //center
                    if (Grid[i+1][j+1] != 'o')
                        Grid[i+1][j] = 'x';
                    //right
                    if (j < Col-1 && Grid[i+1][j+1] != 'o')
                        Grid[i+1][j+1] = 'x';
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