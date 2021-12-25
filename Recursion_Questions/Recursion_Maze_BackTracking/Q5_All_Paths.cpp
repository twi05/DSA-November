#include <iostream>
using namespace std;


void mazepath(int r, int c, bool maze[3][3], string p, int totalR, int totalC)
{
    if (r == totalR - 1 && c == totalC - 1)
    {
        cout << p << endl;
        return;
    }
    if (!maze[r][c])
    {
        return;
    }
    maze[r][c] = false;
    if (r < totalR - 1)
    {
        mazepath(r + 1, c, maze, p + 'D', totalR, totalC);
    }

    if (c < totalC - 1)
    {
        mazepath(r, c + 1, maze, p + 'R', totalR, totalC);
    }
    if (r > 0)
    {
        mazepath(r - 1, c, maze, p + 'U', totalR, totalC);
    }

    if (c > 0)
    {
        mazepath(r, c - 1, maze, p + 'L', totalR, totalC);
    }
    maze[r][c] = true;
   
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
    
 bool maze[3][3] = {{true, true, true},
        {true, true, true},
        {true, true, true},
    };
    // int totalRow = maze[].size();
    mazepath(0, 0, maze, "", row, col);
    return 0;
}
