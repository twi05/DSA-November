#include <iostream>
using namespace std;

const int N = 20;
int a[] = {12,5, 6};

void merge(int l, int r, int mid)
{
    int l_size = mid - l + 1;
    int L[l_size + 1];

    int r_size = r - (mid + 1) + 1;
    int R[r_size + 1];

    for (int i = 0; i < l_size; i++)
    {
   L[i] = a[l + i];
    }

    for (int i = 0; i < r_size; i++)
    {
        R[i] = a[mid + 1 + i];
    }

    L[l_size] = R[r_size] = INT_MAX;

    int l_i = 0;
    int r_i = 0;

    for (int i = l; i <= r; i++)
    {
        if (L[l_i] <= R[r_i])
        {
            a[i] = L[l_i];
            l_i++;
        }
        else
        {
            a[i] = R[r_i];
            r_i++;
        }
    }
}

void mergeSort(int l, int r)
{

    if (l == r)
    {
        return;
    }
    int mid = (l + r) / 2;

    mergeSort(l, mid);
    mergeSort(mid + 1, r);

    merge(l, r, mid);
}

int main()
{

    int size = sizeof(a) / sizeof(a[0]);

    mergeSort(0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
    return 0;
}