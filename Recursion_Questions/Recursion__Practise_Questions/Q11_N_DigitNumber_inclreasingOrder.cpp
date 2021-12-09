#include <iostream>
#include <math.h>
using namespace std;

bool increasing(int n, int last)
{
    if (n == 0)
    {
        // cout<<"yes";
        return true;
    }

    int x = n % 10;

    n = n / 10;

    if (x >= last)
    {
        // cout<<"yaha hu me";
        return false;
    }
    return increasing(n, x);

    return false;
}

void nDigits(int end, int num)
{


    if (num == end)
    {
        return;
    }

    if (increasing(num, 100))
    {
        cout << num << " ";
        nDigits(end, num + 1);
    }
    else
    {
        nDigits(end, num + 1);
    }
}

int main()
{
    int n = 3;
if(n==1){
    cout<<0<<" ";
}
    nDigits( pow(10, n),pow(10, n - 1));
    // cout<<pow(10, n );
    // cout<<increasing(1034,100);
    return 0;
}