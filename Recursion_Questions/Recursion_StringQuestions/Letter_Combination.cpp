#include <iostream>
#include <vector>

using namespace std;

void letterCombination(string p, string up)
{
    int i;
    if (up.empty())
    {
        cout << p << endl;
        return;
    }
    char ch = 'a';
    for (i = (int(up.at(0) - '0') - 1) * 3; i < ((up.at(0) - '0') * 3); i++)
    {
        letterCombination(p + char(int(ch) + i), up.substr(1));
    }
}
/*
vector<string > letterCombination(string p, string up)
{

    int i;
    if (up.empty())
    {
        vector<string> list;
        list.push_back(p);
        return;
    }
    char ch = 'a';
            vector<string> list;
    for (i = (int(up.at(0) - '0') - 1) * 3; i < ((up.at(0) - '0') * 3); i++)
    {
   
          return list.push_back(letterCombination(p + char(int(ch) + i), up.substr(1))) ;
    }
}
*/
int main()
{
    string str = "123542132231";
    letterCombination("", str);
  /*  vector<string > ans;
   ans =  letterCombination("", str);
    
for( <string> i: ans){
    cout<<i;
}*/
    return 0;
}