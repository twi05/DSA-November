#include <iostream>
using namespace std;
#define TROW 1
#define TCOL 1

void display(bool board[TROW][TCOL])
{
    // cout<<"asdf";
    for (int i = 0; i < TROW; i++)
    {
        cout << "[";
        for (int j = 0; j < TCOL; j++)
        {

            if (board[i][j])
            {
                cout << "Q ";
            }
            else
            {
                cout << "X ";
            }
        }
        cout << "]";
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
}

bool safe(int r, int c, bool board[TROW][TCOL])

{
    // cout<<"asdf";
    // Checking in row
    for (int i = 0; i < r; i++)
    {
        if (board[i][c])
        {
            return false;
        }
    }

    for (int i = 1; i <= min(r, c); i++)
    {
        if (board[r - i][c - i])
        {
            return false;
        }
    }

    for (int i = 1; i <= min(r, TCOL - c - 1); i++)
    {

        if (board[r - i][c + i])
        {
            return false;
        }
    }
    return true;
}

int nQueens(int r, bool board[TROW][TCOL])
{

    if (r == TROW)
    {
        display(board);
        return 1;
    }
    int count = 0;

    for (int col = 0; col < TCOL; col++)
    {
        // if queen is to be safe

        if (safe(r, col, board))
        {
            board[r][col] = true;
            count += nQueens(r + 1, board);
            board[r][col] = false;
        }
        // else{
        //     nQueens(r , board);
        // }
    }
    return count;
}

int main()
{
    bool board[TROW][TCOL] = {false};
    cout << nQueens(0, board);
    return 0;
}