#include <iostream>
using namespace std;
//https://www.codechef.com/problems/FIBXOR01/
// This questoin is made for iterative approach, since it is availavble in 
//recursion practice assignment, thats why being solved by recursion approach below
int specialFib(int *arr, int n)
{
    if (n == 0)
    {
        return arr[0];
    }

    if (n == 1)
        return arr[1];

    return specialFib(arr,n-1)^specialFib(arr,n-2);
}
int main()
{
    int n = 4;
    while (n > 0)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }

        cout << specialFib(arr, arr[2])<<endl;
        n--;
    }

    return 0;
}