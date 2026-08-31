#include <iostream>
#include <vector>
#include <string>
using namespace std;

void ratInMaze(vector<vector<int>> &maze, int row, int col, string path,
               vector<vector<bool>>& visited)
{
    int n = maze.size();
    if (row == n - 1 && col == n - 1)
    {
        cout << path << endl;
        return;
    }
    visited[row][col] = true;
    if (row + 1 < n && !visited[row + 1][col] && maze[row + 1][col] == 1)
    {
        ratInMaze(maze, row + 1, col, path + " D ", visited);
    }
    if (row - 1 >= 0 && !visited[row - 1 ][col] && maze[row - 1][col] == 1)
    {
        ratInMaze(maze, row - 1, col, path + " U ", visited);
    }
    if (col + 1 < n  && !visited[row][col + 1] && maze[row][col + 1] == 1)
    {
        ratInMaze(maze, row, col + 1, path + " R ", visited);
    }
    if (col - 1 >= 0 && !visited[row][col - 1 ] && maze[row][col - 1] == 1)
    {
        ratInMaze(maze, row, col - 1, path + " L ", visited);
    }
    visited[row][col] = false;
}

int main()
{
    vector<vector<int>> maze = {{1, 0, 0, 0},
                                {1, 1, 0, 0},
                                {1, 1, 0, 0},
                                {0, 1, 1, 1}};
    int n = maze.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    ratInMaze(maze, 0, 0, "", visited);

    return 0;
}