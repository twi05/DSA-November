#include <iostream>
#include <vector>
using namespace std;

vector<string> powerSet(string p, string up,
                        vector<string> ans)
{
    if (up.empty())
    {
        //  powerSet(up, p.substr(1));
        //  if(p.empty()){
        ans.push_back(p);
        return ans;
        //  }
    }

    cout << p << " ";

    for (int i = 0; i < up.size(); i++)

    {
        char ch = up.at(0);
        p = p + ch;
        return powerSet(p, up.substr(1), ans);
                p =p.substr(0, p.length()-1);
    }

     return powerSet(p, up.substr(1), ans);

}
int main()
{
    vector<string> ans;
    ans = powerSet("", "abc", ans);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}