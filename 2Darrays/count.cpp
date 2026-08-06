#include <iostream>
using namespace std;

void countOf(int matrix[][3], int n, int m, int key)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == key)
            {
                count++;
            }
        }
    }
    cout << "Count of seven is : " << count << endl;
}

int main()
{
    int matrix[][3] = {{4, 7, 8},
                       {8, 8, 7}};
    countOf(matrix, 2, 3, 7);
}