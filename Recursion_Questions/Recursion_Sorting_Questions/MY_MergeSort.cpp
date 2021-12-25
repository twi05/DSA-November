#include <iostream>
using namespace std;

void merge(int *arr, int l, int r, int mid)
{

    int l_size = mid -l  + 1;
    int L[l_size];

    int r_size = r - mid;
    int R[r_size];

    for (int i = 0; i < l_size; i++)
    {
        L[i] = arr[l + i];
    }
    for (int i = 0; i < r_size; i++)
    {
        R[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;

    while (i < l_size  && j < r_size)
    {
        if (L[i] >= R[j])
        {
            arr[k] = R[j];
            k++;
            j++;
        }

        else
        {
            arr[k] = L[i];
            i++;
            k++;
        }
    }
    while (i < l_size)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < r_size)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int *arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, r, mid);
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
    int arr[] = {38, 0, 2, 1, 3, 5, -100,5,48,53,4,54,584,68,687,897,8,54,57,87,86};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}