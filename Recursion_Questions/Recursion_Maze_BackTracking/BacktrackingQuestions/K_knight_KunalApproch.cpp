// https://www.geeksforgeeks.org/place-k-knights-such-that-they-do-not-attack-each-other/

#include <iostream>
using namespace std;
#define TROW 5
#define TCOL 5

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
                cout << "K ";
            }
            else
            {
                cout << "0 ";
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

    if (c + 2 <= TCOL - 1 && r + 1 <= TROW - 1)
    {
        if (board[r + 1][c + 2])
        {
            return false;
        }
    }
    if (c + 2 <= TCOL - 1 && r - 1 >= 0)
    {
        if (board[r - 1][c + 2])
        {
            return false;
        }
    }
    if (c - 2 >= 0 && r - 1 <= TCOL - 1)
    {
        if (board[r - 1][c - 2])
        {
            return false;
        }
    }
    if (c - 2 >= 0 && r + 1 >= 0)
    {
        if (board[r + 1][c - 2])
        {
            return false;
        }
    }
    if (r - 2 >= 0 && c + 1 <= TCOL - 1)
    {
        if (board[r - 2][c + 1])
        {
            return false;
        }
    }
    if (r - 2 >= 0 && c - 1 >= 0)
    {
        if (board[r - 2][c - 1])
        {
            return false;
        }
    }
    if (r + 2 <= TROW - 1 && c - 1 >= 0)
    {
        if (board[r + 2][c - 1])
        {
            return false;
        }
    }
    if (r + 2 <= TROW - 1 && c + 1 <= TCOL - 1)
    {
        if (board[r + 2][c - 1])
        {
            return false;
        }
    }

    return true;
}
void knights(int r, int c, int count, bool board[TROW][TCOL])
{
    
    if (count == 0)
    {
        display(board);
        
        return;
    }
    if (r == TROW - 1 && c == TCOL)
    {
        cout<<"yes";
        return;
    }

    if (c == TCOL)
    {
        knights(r + 1, 0, count, board);
     return;
    }

    if (safe(r, c, board))
    {
        board[r][c] = true;
        knights(r, c + 1, count - 1, board);
        board[r][c] = false;
    }
    knights(r, c + 1, count, board);  
}

int main()
{
    bool board[TROW][TCOL] = {false};
    knights(0, 0, 5, board);
    return 0;
}
