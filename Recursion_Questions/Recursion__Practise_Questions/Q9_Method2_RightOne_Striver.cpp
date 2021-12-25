#include <iostream>
#include <vector>
using namespace std;

void combination(int index, int target, vector<int> ds, vector<int> &candidates, vector<vector<int>> &ans)
{
    if (index == candidates.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }

    if (candidates[index] <= target)
    {
        ds.push_back(candidates[index]);
        combination(index, target - candidates[index], ds, candidates, ans);
        ds.pop_back();
    }
    combination(index + 1, target, ds, candidates, ans);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;

    combination(0, target, ds, candidates, ans);
    return ans;
}

int main()
{
    vector<int> candidates = {3,5,4};
    int target = 8;
    vector<vector<int>> ans = combinationSum(candidates, target);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
        cout << "]";
    }
    return 0;
}