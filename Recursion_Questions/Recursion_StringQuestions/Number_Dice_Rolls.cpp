// Q.)          Number of Dice rolls with target sum

#include <iostream>
#include <vector>
using namespace std;
void dice(string p, int target)
{

    if (target == 0)
    {
        cout << p << endl;
        return;
    }

    for (int i = 1; i <= 5 && i <= target; i++)
    {

        dice(p + to_string(i), target - i);
    }
}

vector<string> diceret(string p, int target, vector<string> ans)
{

    if (target == 0)
    {

        ans.push_back(p);
        return;
    }
    vector<string> ans;
    for (int i = 1; i <= 5 && i <= target; i++)
    {

        //      &tmp =ans.getValue();
        // tmp.insert(tmp.begin(), 0);
        //   ans.insert(ans.size(),ans.size(), dice(p + to_string(i) ,  target- i));
        ans.push_back(ans.size(), dice(p + to_string(i), target - i));
    }
    return ans;
}

int main()
{
    vector<string> ans;
    diceret("", 6, ans);
    return 0;
}