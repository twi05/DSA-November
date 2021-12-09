#include <iostream>
using namespace std;

// Lets say obstacle is in 2,2. There is rivver, We can go in that cell.

void maze(int r, int c, bool board[3][3], int obsR, int obsC, string p)
{

    if (r == 1 && c == 1)
    {
        cout << p << endl;
        return;
    }
    if(r == obsR && c==obsC){
        return;
    }
    // if (!board[r][c])
    // {
    //     return;
    // }
    if (r > 1)
    {
        maze(r - 1, c, board, obsR, obsC, p + 'R');
    }
    if (c > 1)
    {
        maze(r, c - 1, board, obsR, obsC, p + 'D');
    }
}
int main()
{
    bool board[3][3] = {
        {true, true, true},
        {true, false, true},
        {true, true, true},
    };
    maze(3, 3, board, 2, 2, "");
    return 0;
}