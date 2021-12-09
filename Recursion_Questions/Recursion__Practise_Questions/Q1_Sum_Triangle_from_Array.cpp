#include <iostream>
using namespace std;

void sumTriangle(int *arr, int n)
{
    if(n==0){

        return;
    }

    int arrAns[n-1];
    for(int i=0;i<n-1;i++){
        arrAns[i] = arr[i]+arr[i+1];
    }


    sumTriangle(   arrAns, n-1);
        for(int i=0;i<n-1;i++){
        cout<<arrAns[i]<<" " ;
        
    }
    cout<<endl;

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n;
    sumTriangle(arr, n);
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" " ;
        
    }
    return 0;
}