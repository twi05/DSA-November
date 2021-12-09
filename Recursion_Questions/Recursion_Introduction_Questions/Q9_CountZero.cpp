#include <iostream>
using namespace std;

int zeros(int n, int count)
{
    if (n == 0)
    {
        return count;
    }

    if (n % 10 == 0)
    {
        count++;
    }
    return zeros(n / 10, count);
}
int main()
{
    int n = 302040;
    cout << zeros(n, 0);
    return 0;
}