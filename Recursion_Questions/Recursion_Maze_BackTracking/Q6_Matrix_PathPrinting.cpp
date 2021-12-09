#include <iostream>
using namespace std;

void mazepath(int r, int c, int maze[3][3], string p, int totalR, int totalC, int steps)
{
    if (r == totalR - 1 && c == totalC - 1)
    {
        maze[r][c] = steps;
        cout << p << endl;
        for (int i = 0; i < totalR; i++)
        {
            cout << "[";
            for (int j = 0; j < totalC; j++)
            {
                cout << maze[i][j] << "\t";
            }
            cout << "]";
            cout << "\n";
        }
        return;
    }
    if (maze[r][c])
    {
        return;
    }
    maze[r][c] = steps;

    if (c > 0)
    {
        mazepath(r, c - 1, maze, p + 'L', totalR, totalC, steps + 1);
    }
    if (r > 0)
    {
        mazepath(r - 1, c, maze, p + 'U', totalR, totalC, steps + 1);
    }
    if (c < totalC - 1)
    {
        mazepath(r, c + 1, maze, p + 'R', totalR, totalC, steps + 1);
    }
    if (r < totalR - 1)
    {
        mazepath(r + 1, c, maze, p + 'D', totalR, totalC, steps + 1);
    }

    maze[r][c] = 0;
}

int main()
{
    int x = 3;
    int row = x, col = x;
    // bool maze[row][col];
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         maze[i][j] = true;
    //     }
    // }

    int maze[3][3] = {0};
    // int totalRow = maze[].size();
    mazepath(0, 0, maze, "", row, col, 1);
    return 0;
}
