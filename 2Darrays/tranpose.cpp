#include <iostream>
using namespace std;

int main()
{
    int row = 2, columns = 3;
    int matrix[][columns] = {{2, 3, 7}, {2, 5, 6}};

    int transpose[columns][row] = {{0}};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < row; j++)
        {
            
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}