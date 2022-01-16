#include <iostream>
using namespace std;

void powerSet(string p, string up)
{
    if (up.empty())
    {
        //  powerSet(up, p.substr(1));
        //  if(p.empty()){
             return;
        //  }
            
    }

    char ch = up.at(0);

    p = p + ch;
    cout << p << " ";

    powerSet(p, up.substr(1));
}
int main()
{
    powerSet("", "122");
    return 0;
}