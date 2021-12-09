#include <iostream>
using namespace std;
void maze(int r, int c, string p)
{

    if (r == 1)
    {
        for (int i = 0; i < c - 1; i++)
        {
            p = p + 'd';
        }
        cout << p << endl;
        return;
    }
    if (c == 1)
    {
        for (int i = 0; i < r - 1; i++)
        {
            p = p + 'r';
        }
        cout << p << endl;
        return;
    }

    maze(r - 1, c, p + 'r');
    maze(r, c - 1, p + 'd');
}
void mazeKunal(int r, int c, string p)
{

    if (r == 1 && c == 1)
    {

        cout << p << endl;
        return;
    }
    if (r > 1)
    {
        mazeKunal(r - 1, c, p + 'r');
    }
    if (c > 1)
    {
        mazeKunal(r, c - 1, p + 'd');
    }
}
int main()
{

    // maze(3, 3, "");
    mazeKunal(3, 3, "");

    return 0;
}