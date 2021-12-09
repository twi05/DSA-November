#include <iostream>
using namespace std;

string upper(string p, string up, char lastCh)
{
    if (up.empty())
    {
        return p;
    }
    char ch = up.at(0);

    if ((lastCh != ch))
    {
        lastCh = ch;
        return upper(p + ch, up.substr(1), lastCh);
    }
    return upper(p, up.substr(1), lastCh);
    return "Nothing";
}
int main()
{
    string str = "aabccba";
    cout << upper("", str, ' ');
    return 0;
}