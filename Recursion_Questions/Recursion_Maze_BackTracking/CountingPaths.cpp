#include <iostream>
using namespace std;

int path(int i, int j)
{
    if (i == 1 || j == 1)
    {
        return 1;
    }

    int left = path(i - 1, j);
    int right = path(i, j - 1);

    return left + right;
}

int path2(int i, int j)
{
    if (i == 1 || j == 1)
    {
        return 1;
    }

   return path(i - 1, j) + path(i, j - 1);
}


int path3(int i, int j)
{
    if (i == 1 || j == 1)
    {
        return 1;
    }
    int count = path(i - 1, j);
    count += path(i, j - 1);
   return count;
}


int main()
{
    // cout << path(3, 3);
    // cout << path2(3, 3);
  cout << path3(3, 3);
    return 0;
}