#include <iostream>
#include <string>
using namespace std;

void permutation(string p, string up)
{
    if (p.empty())
    {
        cout << up << " ";
        return;
    }
    // cout<<up<<" check"<<endl;
    for (int i = 0; i < p.length(); i++)
    {
        char ch = p[i];
        string first = p.substr(0, i);
        string last = p.substr(i + 1);
        // cout<<first + last<<" check1"<<endl;
        permutation(first + last, up + ch);
    }
}
int main()
{
    permutation("abc", "");
    return 0;
}