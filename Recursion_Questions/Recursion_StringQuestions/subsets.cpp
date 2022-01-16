#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

vector<vector<string>> subsets(vector<int> arr)
{
    int k, index;

    vector<vector<string>> subset;

    for (int i = 0; i < pow(2, arr.size()); i++)
    {
        k = pow(2, arr.size() - 1);
        index = 0;
        vector<string> ans;
        while (k != 0)
        {
            if ((i & k) == k)
            {
                ans.push_back(to_string(arr[index]));
            }
            else
            {
                ans.push_back(" ");
            }
            index++;
            k >>= 1;
        }

        subset.insert(subset.end(), ans);
    }
    return subset;
}

// time complexity = O((2^n )* (n))
// space complexity = O((2^n )* (n))

int main()
{
    // int arr[] = {1,2,3};
    vector<int> arr{1, 2, 3};
    // vector<int> arr{1,2,2,3};
    vector<vector<string>> web = subsets(arr);
    for (auto i : web)
    {
        for (auto j : i)
        {
            cout << " " << j << " ";
        }
        cout << endl
             << endl;
    }
    return 0;
}