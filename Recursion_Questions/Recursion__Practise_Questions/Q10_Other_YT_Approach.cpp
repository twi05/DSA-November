#include <iostream>
#include <vector>
using namespace std;

bool search(vector<vector<char>> &board, int r, int c, string &word, int index, vector<vector<bool>> &visited)
{
    if (index == word.length() - 1)
        return true;
    visited[r][c] = true;

    if (r > 0 && !visited[r - 1][c] && board[r - 1][c] == word[index + 1] && search(board, r - 1, c, word, index + 1, visited))
    {
        return true;
    }
    if (r < board.size() - 1 && !visited[r + 1][c] && board[r + 1][c] == word[index + 1] && search(board, r + 1, c, word, index + 1, visited))
    {
        return true;
    }
    if (c < board[0].size() - 1 && !visited[r][c + 1] && board[r][c + 1] == word[index + 1] && search(board, r, c + 1, word, index + 1, visited))
    {
        return true;
    }
    if (c > 0 && !visited[r][c - 1] && board[r][c - 1] == word[index + 1] && search(board, r, c - 1, word, index + 1, visited))
    {
        return true;
    }
    visited[r][c] = false;

    return false;
}

bool wordSearch(int r, int c, string word, vector<vector<char>> &board)
{
    int const TROW = board.size(), TCOL = board[0].size();

    vector<vector<bool>> visited(TROW, vector<bool>(TCOL, false));

    for (int i = 0; i < TROW; i++)
    {
        for (int j = 0; j < TCOL; j++)
        {
            if (board[i][j] == word.at(0) && search(board, i, j, word, 0, visited))
                return true;
        }
    }
    return false;
}
bool exist(vector<vector<char>> &board, string word)
{

    if (wordSearch(0, 0, word, board))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    vector<vector<char>> board = {{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
    string word = "ABCZ";
    cout << exist(board, word);
    return 0;
}