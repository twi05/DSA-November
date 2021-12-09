#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

void  recurpermute(vector<int>&ds , vector<vector<int>>&ans, vector<int> nums,int *freq ){



}

vector <vector<int>> permute(vector<int> &nums)
{
    vector<int>ds;
    vector<vector<int>>ans;
    int freq[nums.size()] = {0};
    recurpermute(ds,ans,nums,freq);
    return ans;
}

int main()
{
    vector<int> nums{1, 2, 3};
    vector < vector<int>> finalAns;
   finalAns =  permute(nums);
    // for(< vector<int> x: finalAns){
    //     cout<<x;
    // }
    return 0;
}