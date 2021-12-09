#include<iostream>
using namespace std;

void merge(int arr[], int l, int r, int mid ){


    int l_size = l - mid + 1;
    int L[l_size];

    int r_size = r - mid ;
    int R[r_size];

    for(int i = 0 ; i<l_size; i++){
        L[i] = arr[l+i];
        
    }
    for(int i = 0 ; i<r_size; i++){
        R[i] = arr[mid+1+i];

    }
int i=l;
int j=0;
int k=0;

  while(i<j && i<k){
        if(L[j]>=R[k]){
            arr[i]=R[k];
            k++;
            i++;
        }

        else {
            arr[i]=L[j];
            j++;
            i++;

        }
}
        while(j<l_size){
                 arr[i]=L[j];
                 j++;
                 i++;
        }

        while(k<r_size){
                 arr[i]=R[k];
                 k++;
                 i++;
        }
    }



void mergeSort(int *arr, int l, int r){

    if(l<r){

        int mid = (l+r)/2;

        mergeSort(arr, l, mid);
        mergeSort(arr,mid + 1 , r);

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

int main(){

  int arr[] = {38,0,2500};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
return 0;
}