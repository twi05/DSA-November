#include<iostream>
#include<vector>
#include<string>
using namespace std;

// Note : before applying string properties always check if the string is non-empty

void subseq(string p, string up){
    
    if (up.empty()){
        cout<<p<<endl;
        return;
    }
    subseq(p + up.at(0), up.substr(1));
    subseq(p, up.substr(1));
}

// void subseqAscii(string p, string up){
    
//     if (up.empty()){
//         cout<<p<<endl;
//         return;
//     }

//     char ch = up.at(0);

//     subseq(p + up.at(0), up.substr(1));
//     subseq(p, up.substr(1));
//     subseq(p + (ch + 0), up.substr(1));
// }


vector<string> subSeq(string p, string up){

    if (up.empty()){
        vector<string> str;
        str.push_back(p);
        return str;
    }

    vector<string> left = subSeq(p + up.at(0), up.substr(1));
    vector<string> right = subSeq(p, up.substr(1));

    left.insert(left.end(),right.begin(),right.end());
    return left;
}


// vector<string> subSeq(string p, string up){

//     if (up.empty()){
//         vector<string> str;
//         str.push_back(p);
//         return str;
//     }

//     vector<string> left = subSeq(p + up.at(0), up.substr(1));
//     vector<string> right = subSeq(p, up.substr(1));
//     vector<string> third = subSeq(p  + (up.at(0) + 0), up.substr(1));

//     left.insert(left.end(),right.begin(),right.end());
//     left.insert(left.end(),third.begin(),third.end());
//     return left;
// }



int main(){

    subseq("","abc");
    cout<<endl<<endl;
    vector<string> str = subSeq("","abc");
    for(auto &i : str){
        cout<<i<<endl;
    }

    // char ch = 'a';
    // cout<<ch + 0<<endl; // 97
    // cout<<(char)(ch + 0)<<endl; // a 
    // cout<<(char)(ch) + (char)(0)<<endl; // 97
    // cout<<ch + (char)(0)<<endl; // 97
    // cout<<(char)(ch) + (char)(0)<<endl; // 97

    // int k = 1;
    // int m = 2;
    // cout<<k/m<<endl;  // 0
    // cout<<m/k<<endl;  // 2

    // int k = 1;
    // float m = 2;
    // cout<<k/m<<endl;  // 0.5
    // cout<<m/k<<endl;  // 2

    // float k = 1;
    // int m = 2;
    // cout<<k/m<<endl;  // 0.5
    // cout<<m/k<<endl;  // 2

    // float k = 1;
    // float m = 2;
    // cout<<k/m<<endl;  // 0.5
    // cout<<m/k<<endl;  // 2

    // double k = 1;
    // int m = 2;
    // cout<<k/m<<endl;  // 0.5
    // cout<<m/k<<endl;  // 2

    // int k = 1;
    // double m = 2;
    // cout<<k/m<<endl;  // 0.5
    // cout<<m/k<<endl;  // 2

    // double k = 1;
    // double m = 2;
    // cout<<k/m<<endl;  // 0.5
    // cout<<m/k<<endl;  // 2

    // float k = 1;
    // double m = 2;
    // cout<<k/m<<endl;  // 0.5
    // cout<<m/k<<endl;  // 2

    // double k = 1.0;
    // double m = 2.0;
    // cout<<k/m<<endl;  // 0.5
    // cout<<m/k<<endl;  // 2

// 06:40:03AM
// 04:59:59AM
// 12:05:39AM
// 12:40:22AM

    return 0;
}