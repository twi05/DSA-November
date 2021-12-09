#include <iostream>
#include <vector>

using namespace std;
bool wordSearch(int r, int c, string word, vector<vector<char>> &board)
{
    int const TROW = board.size(), TCOL = board[0].size();

    
    if (word.empty())
    {
        return true;
    }

    if (c == TCOL)
    {
        wordSearch(r + 1, 0, word, board);
    }

    if (r == TROW - 1 && c == TCOL)
    {
        return false;
    }
    
    if (r < TROW - 1 && board[r + 1][c] == word.at(0) || board[r][c] == word.at(0))
    {
        board[r][c] = '0';
        wordSearch(r + 1, c, word.substr(1), board);
    }
    if (r > 0 && board[r - 1][c] == word.at(0))
    {
        board[r][c] = '0';
        wordSearch(r - 1, c, word.substr(1), board);
    }

    if (c < TCOL - 1 && board[r][c + 1] == word.at(0))
    {
        board[r][c] = '0';
        wordSearch(r, c + 1, word.substr(1), board);
    }
    if (c > 0 && board[r][c - 1] == word.at(0))
    {
        board[r][c] = '0';
        wordSearch(r, c - 1, word.substr(1), board);
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
    string word = "ABC";
    cout << exist(board, word);
    return 0;
}