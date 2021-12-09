#include <iostream>
using namespace std;
void swap(int arr[], int j, int k)
{

    int temp = arr[j];
    arr[j] = arr[k];
    arr[k] = temp;
}

int partition(int *arr, int l, int h)
{
    int s = l, e = h ;
    int mid = (l+h)/2;
    // int pivot = arr[mid];
    // swap(mid, h);
   
    int pivot = arr[l];

    while (s < e)
    {

        do
        {
            s++;
        } while (arr[s] <= pivot);

        do
        {
            e--;

        } while (arr[e] > pivot);
        if (s <= e)
        {
            swap(arr, s, e);
        }
    }

    swap(arr, e, h);

    return e;
}

void quickSort(int *arr, int l, int h)
{

    if (l < h)
    {

        int pivot = partition(arr, l, h);

        quickSort(arr, l, pivot);
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

    int arr[] = {3, 55, 20, 1,6611};

    int arr_size = sizeof(arr) / sizeof(arr[0]);
//  arr[arr_size] = INT_MAX;
    printf("Given array is \n");
    printArray(arr, arr_size);

    quickSort(arr, 0, arr_size-1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}