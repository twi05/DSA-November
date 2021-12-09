#include<iostream>
#include<math.h>
using namespace std;

int rev(int n, int digits){

    if(n==0){
        return 0;
    }
    return (n%10)*(pow(10, digits)) + rev(n/10, digits-1);
}
int main(){

    int n=1284;
    cout<<rev(n,3);

return 0;
}