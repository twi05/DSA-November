#include <iostream>
using namespace std;

bool isSorted(int *arr, int length, int pos)
{

    if (pos >= length)
    {
        return true;
    }

    // if (arr[pos] > arr[pos + 1])
    // {
    //     return false;
    // }

    return arr[pos] < arr[pos + 1] && isSorted(arr, length, ++pos);
}
int main()
{

    int arr[] = {2, 5, 4, 5, 6};

    cout << isSorted(arr, 5, 0);

    return 0;
}