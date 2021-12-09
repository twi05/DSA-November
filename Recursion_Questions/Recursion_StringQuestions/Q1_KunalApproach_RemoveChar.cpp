#include <iostream>
#include <string.h>

using namespace std;

 //Approach 1

void skip(string p, string up)
{
    if (up.empty())
    {
        cout << p;
        return;
    }
    char ch = up.at(0);

    if (ch == 'a')
    {
        skip(p, up.substr(1));
    }
    else
    {
        skip(p + ch, up.substr(1));
    }
}


//Approach 2

string skip2(string up){
    if(up.empty()){
        return "";
    }

    char ch = up.at(0);

    if(ch=='a'){
        return skip2(up.substr(1));
        
    }
    else{
        return ch + skip2(up.substr(1));

    }
}



int main()
{
    // skip("", "baccadah");
    cout<<skip2("abc");
    return 0;
}