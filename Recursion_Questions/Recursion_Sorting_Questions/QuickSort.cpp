#include <iostream>
#include<algorithm>
using namespace std;

// void swap(int *a, int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

int partition(int *arr, int l, int h)
{
    int s = l, e = h;
    int mid = (l + h) / 2;
    int pivot = arr[l];

    while (s < e)
    {

        while (arr[s] <= pivot && s < h)
            s++;

        while (arr[e] > pivot)
            e--;

        if (s < e)
        {
            swap(arr[s], arr[e]);
        }
    }

    swap(arr[e], arr[l]);
    return e;
}

void quickSort(int *arr, int l, int h)
{
    if (l < h)
    {
        int pivot = partition(arr, l, h);
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, h);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    // int arr[] = {4,3,2,1};
    int arr[] = {0, 3, 55, 20, 1, 4, 21, 0};

    int arr_size = sizeof(arr) / sizeof(arr[0]);
    //  arr[arr_size] = INT_MAX;
    printf("Given array is \n");
    printArray(arr, arr_size);

    quickSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}