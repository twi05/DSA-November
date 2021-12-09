#include <iostream>
#include <math.h>
#include<vector>

using namespace std;

bool increasing(int n, int last)
{
    if (n == 0)
    {
        return true;
    }

    int x = n % 10;

    n = n / 10;

    if (x >= last)
    {
        // cout<<"yaha hu me";
        return false;
    }
    return increasing(n, x);

    return false;
}

vector<int> nDigits(int end, int num)
{
vector<int> ans;

    if (num == end)
    {
        return ans;
    }

    if (increasing(num, 100))
    {
        ans.push_back(num);
        nDigits(end, num + 1);
    }
    else
    {
        nDigits(end, num + 1);
    }

    return ans;
}

int main()
{
    int n = 3;
if(n==1){
    cout<<0<<" ";
}
vector<int> ans;
   ans= nDigits( pow(10, n),pow(10, n - 1));
for(auto num : ans){
            cout<< num <<" ";
        }
    // cout<<pow(10, n );
    // cout<<increasing(1034,100);
    return 0;
}