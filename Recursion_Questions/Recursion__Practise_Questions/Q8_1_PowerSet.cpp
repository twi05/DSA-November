#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

void powerSet(string str)
{

    int powerset_size = pow(2, str.length());

    for (int i = 0; i < powerset_size; i++)
    {
        string ans;

        for (int j = 0; j < str.length(); j++)
        {
            if (i & (1 << j))
            {
                ans += str[j];
            }
        }
        cout << ans << " ";
    }
}

void powerSet_Rec(string str, int powerset_size)
{

    if (powerset_size < 0)
    {
        return;
    }

    string ans;

    for (int j = 0; j < str.length(); j++)
    {
        if (powerset_size & (1 << j))
        {
            ans += str[j];
        }
    }
    cout << ans << " ";

    powerSet_Rec(str, powerset_size - 1);
}
vector<string> powerSet_Vec(string str, int powerset_size, vector<string> &ans)
{

    if (powerset_size == 0)
    {
        return ans;
    }

    string ans_string;

    for (int j = 0; j < str.length(); j++)
    {
        if (powerset_size & (1 << j))
        {
            ans_string += str[j];
        }
    }
    ans.push_back(ans_string);
    return powerSet_Vec(str, powerset_size - 1, ans);
}
int main()
{
    string str = "122";
 sort(str.begin(), str.end());
    int powerset_size = pow(2, str.length());

    // powerSet("abc");
    // powerSet_Rec(str, powerset_size);

    vector<string> ans;
    ans = powerSet_Vec(str, powerset_size, ans);
    // sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}