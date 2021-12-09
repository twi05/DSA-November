#include <iostream>
using namespace std;

int factorial(int n, int ans)
{

    if (n< 1)
    {
        return ans;
    }

    ans *=n;

    return factorial(n-1 , ans);

    //Recurrence Realtion:  return factorial*factorial(n-1);
}
int main()
{

    int n = 5;
    cout << factorial(5, 1);

    return 0;
}