#include <iostream>
using namespace std;
void swap(int *arr, int j, int k)
{
    int temp = arr[j];
    arr[j] = arr[k];
    arr[k] = temp;
}
void selectionSortRecursion(int *arr, int len, int i, int j, int min)
{
    if (i == len - 1)
    {
        return;
    }
    else if (j > len - 1)
    {
        swap(arr, i, min);
        selectionSortRecursion(arr, len, i + 1, i + 1, i + 1);
    }
    else
    {
        if (arr[min] > arr[j])
        {
            min = j;
        }
        selectionSortRecursion(arr, len, i, j + 1, min);
    }
}
int main()
{
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSortRecursion(arr, size, 0, 1, 0);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}