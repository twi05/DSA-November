#include <iostream>
using namespace std;

int sumDigits(int n)
{
    if (n ==0)
    {
        return 0;
    }
    // int x = n % 10;
    // n /= 10;

    return ((n%10)+ sumDigits(n/10));
}

int main()
{

    int n = 1342;

    cout<<sumDigits(n);

    return 0;
}