#include <iostream>
using namespace std;
#define TROW 9
#define TCOL 9

void display(int board[TROW][TCOL])
{
    // cout<<"asdf";
    for (int i = 0; i < TROW; i++)
    {
        cout << "[";
        for (int j = 0; j < TCOL; j++)
        {

            cout << board[i][j] << " ";
        }
        cout << "]";
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
}
bool isSafe(int r, int c, int board[TROW][TCOL], int ele)
{

    for (int i = 0; i < 9; i++)
    {
        if (board[r][i] == ele)
        {
            return false;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        if (board[i][c] == ele)
        {
            return false;
        }
    }
    int R = r - r % 3;
    int C = c - c % 3;
    for (int i = R; i < R + 3; i++)
    {
        for (int j = C; j < C + 3; j++)
        {
            if (board[i][j] == ele)
            {
                return false;
            }
        }
    }

    return true;
}

bool sudokuSolve(int board[TROW][TCOL])
{

    int r = -1;
    int c = -1;

    bool emptyLeft = false;

    for (int i = 0; i < TROW; i++)
    {
        for (int j = 0; j < TCOL; j++)
        {
            if (board[i][j] == 0)
            {
                r = i;
                c = j;
                emptyLeft = true;
                break;
            }

            // if we find some empty element in row;
            if (emptyLeft)
            {
                break;
            }
        }
        
        if (emptyLeft == false)
        {
            return true;
            // sudoku is solved
        }

        // backtranck

        for (int ele = 1; ele <= 9; ele++)
        {
            if (isSafe(r, c, board, ele))
            {
                board[r][c] = ele;
                if (sudokuSolve(board))
                {
                    return true;
                }
            }
            else
            {
                board[r][c] = 0;
            }
        }
    }
    return false;
}
int main()
{

    int board[TROW][TCOL] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                             {5, 2, 0, 0, 0, 0, 0, 0, 0},
                             {0, 8, 7, 0, 0, 0, 0, 3, 1},
                             {0, 0, 3, 0, 1, 0, 0, 8, 0},
                             {9, 0, 0, 8, 6, 3, 0, 0, 5},
                             {0, 5, 0, 0, 9, 0, 6, 0, 0},
                             {1, 3, 0, 0, 0, 0, 2, 5, 0},
                             {0, 0, 0, 0, 0, 0, 0, 7, 4},
                             {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    cout<< sudokuSolve(board);
    display(board);
    return 0;
}