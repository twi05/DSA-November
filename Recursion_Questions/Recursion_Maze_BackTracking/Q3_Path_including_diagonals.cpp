#include <iostream>
using namespace std;
void maze(int r, int c, string p)
{

    if (r == 1)
    {
        for (int i = 0; i < c - 1; i++)
        {
            p = p + 'D';
        }
        cout << p << endl;
        return;
    }
    if (c == 1)
    {
        for (int i = 0; i < r - 1; i++)
        {
            p = p + 'R';
        }
        cout << p << endl;
        return;
    }

    if (r == c)
    {
        maze(r - 1, c - 1, p + 'd');
    }
    maze(r - 1, c, p + 'R');
    maze(r, c - 1, p + 'D');
}
int main()
{

    maze(3, 3, "");

    return 0;
}