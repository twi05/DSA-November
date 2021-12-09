#include <iostream>
#include<string>
using namespace std;

void permutation(string p, string up)
{

    if (up.empty())
    {
        cout << p<<" ";
        return;
    }

    char ch = up.at(0);

    for (int i = 0; i <= p.length(); i++)
    {
        string first = p.substr(0, i);
        string last = p.substr(i); 
        permutation( first + ch + last, up.substr(1));
    }
}

int main()
{
    permutation("", "abc"); 
    return 0;
}