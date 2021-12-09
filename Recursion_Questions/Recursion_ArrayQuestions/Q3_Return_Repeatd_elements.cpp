#include <iostream>
using namespace std;
#include <vector>
 vector<int> v;

void linearSearch(int *arr, int target, int length, int index)
{

    if (index > length)
    {
        return;
    }

    if (arr[index] == target)
    {
        v.push_back(index);
    }

    linearSearch(arr, target, length, ++index);
}
int main()
{

    int arr[] = {2, 3, 3, 5, 6};

    linearSearch(arr, 3, 5, 0);

    cout<<"Size of Vector"<< v.size();
    cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    return 0;
}
