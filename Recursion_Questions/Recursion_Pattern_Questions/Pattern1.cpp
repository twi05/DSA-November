// *****
// ****
// ***
// **
// *
#include <iostream>
using namespace std;
void pattern(int n)
{
    if (n <= 0)
    {
        return;
    }
    for(int i=0; i<n ; i++){
        cout<<"*";
    }

   cout<<endl;
    pattern(n-1);
}

int main()
{

    pattern(4);

    return 0;
}
