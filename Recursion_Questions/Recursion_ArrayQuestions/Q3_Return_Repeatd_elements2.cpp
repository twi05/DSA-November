#include <iostream>
using namespace std;
#include <vector>

// vector<int> v;

 vector<int> linearSearch(int *arr, int target, int length, int index, vector<int> v)
{

    if (index >= length)
    {
        return v;
    }

    if (arr[index] == target)
    {
        v.push_back(index);
    }

    return linearSearch(arr, target, length, ++index , v);
}
int main()
{

    int arr[] = {2, 3, 3, 5, 6};
 vector<int> v;
  vector<int> v1=  linearSearch(arr, 3, 5, 0,v1 );

    // cout<<"Size of Vector"<< v.size();
    // cout<<endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v[i];
    }
    return 0;
}
