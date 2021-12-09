#include <iostream>
using namespace std;

int zeros(int n, int count)
{
    if (n == 0)
    {
        return count;
    }

    if (n % 2 == 0)
    {
        count++;
        return zeros(n / 2, count);
    }

    return zeros(n -1, count+1);
}
int main()
{
    int n = 41;
    cout << zeros(n, 0);
    return 0;
}