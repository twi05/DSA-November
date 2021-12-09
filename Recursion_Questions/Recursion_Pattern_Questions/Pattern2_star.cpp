#include <iostream>
#include <math.h>
using namespace std;
void pattern(int r, int c)
{
    if (r == 0)
    {
        return;
    }
    if (c < r)
    {
        pattern(r, c + 1);
        cout << "*";
    }

    else
    {
        pattern(r - 1, 0);
        cout << endl;
    }
}

int main()
{
    pattern(4, 0);
    return 0;
}
