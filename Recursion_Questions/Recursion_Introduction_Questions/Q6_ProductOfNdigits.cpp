#include <iostream>
using namespace std;

int productDigits(int n)
{
    if (n % 10 == n)
    {
        return n;
    }
    // int x = n % 10;
    // n /= 10;

    return ((n % 10) * productDigits(n / 10));
}

int main()
{

    int n = 1342;

    cout << productDigits(n);

    return 0;
}