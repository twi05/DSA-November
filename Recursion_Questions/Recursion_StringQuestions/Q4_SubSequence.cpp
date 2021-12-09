#include<iostream>
using namespace std;

void subSequence(string p, string up){

    if(up.empty()){
        cout<<p<<endl;
        return;

    }

    char ch = up.at(0);

    subSequence(p + ch, up.substr(1));
    subSequence(p, up.substr(1));
    subSequence(p + ch , up.substr(1));
}


//  vector<string> subSequence2(string p, string up){

//     if(up.empty()){
//         cout<<p<<endl;
//         return;

//     }

//     char ch = up.at(0);

//   vector<string> right =  subSequence(p + ch, up.substr(1));
//     vector<string>  left =subSequence(p, up.substr(1));
// }


int main(){

subSequence("" , "abc");

return 0;
}