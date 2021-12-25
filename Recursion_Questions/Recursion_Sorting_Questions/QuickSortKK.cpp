#include <iostream>
using namespace std;

void quickSort(int arr[], int l, int h)
{
    if (l >= h)
    {
        return;
    }
    int s = l, e = h, temp;
    int mid = (s + e) / 2;

    int pivot = arr[mid];

    if (s <= e)
    {
        while (arr[s] <= pivot)
        {
            s++;
        }
        while (arr[s] > pivot)
        {
            e--;
        }
        if (s <= e)
        {
            temp = arr[e];
            arr[e] = arr[s];
            arr[s] = temp;
            s++;
            e--;
        }
    }
    quickSort(arr, l, e);
    quickSort(arr, s, h);
}

int main()
{
    int arr[] = {3,2,1};

    int arr_size = sizeof(arr) / sizeof(arr[0]);
    //  arr[arr_size] = INT_MAX;
    printf("Given array is \n");
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << "\t";
    }

    quickSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}