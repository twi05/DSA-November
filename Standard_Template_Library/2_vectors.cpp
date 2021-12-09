#include<iostream>
#include <vector>
using namespace std;

void printVec(vector<int> v){
    for(int i=0 ; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int>v;
    int n;

    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);   printVec(v);
    }

    //

    // vector<int> v2= v;      //O(n) COmplexity, Does same as Array .
    //pop_back();
      shayad deletes last element //
     

return 0;
}
