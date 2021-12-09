#include <iostream>
using namespace std;
void pattern(int r, int c)
{
    if (c >=r )
    {
        r--;
        c = 0;
        cout << endl;
    }
    if(r==0){
        return;
    }
cout<<"*";
    pattern(r,c+1);
}
int main()
{
    pattern(4,0);
    return 0;
}
