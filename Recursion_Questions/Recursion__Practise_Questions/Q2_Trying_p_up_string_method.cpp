#include <iostream>
using namespace std;

char upper(string up)
{
    if (up.empty())
    {
        return '0';
    }
    char ch = up.at(0);
    if (isupper(ch))
    {
    return ch;
    }
    return upper(up.substr(1));

}
int main()
{

    cout << upper("geeksfordees");
    return 0;
}