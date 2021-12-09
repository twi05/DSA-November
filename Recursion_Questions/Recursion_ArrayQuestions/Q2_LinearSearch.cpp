#include <iostream>
using namespace std;

int linearSearch(int *arr, int target, int length, int index)
{

    if (index > length)
    {
        return -1;
    }

    if (arr[index] == target)
    {
        return index;
    }

    return linearSearch(arr, target, length, ++index);
}
int main()
{

    int arr[] = {2, 3, 3, 5, 6};

    cout << linearSearch(arr, 4, 5, 0);

    return 0;
}