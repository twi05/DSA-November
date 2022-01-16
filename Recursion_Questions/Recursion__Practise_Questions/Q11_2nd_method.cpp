#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> ans;
    void solve(string p,int start,int n){
        if(n==0 && (p.size() == 1 || p[0]!='0')){
            
            ans.push_back(stoi(p));
            return;
        }
        for(int i=start;i<=9;i++){
            string a= p+to_string(i);
            solve(a,i+1,n-1);
        }
    }

    vector<int> increasingNumbers(int N)
    {
        solve("",0,N);
        return ans;
    }
};

// { Driver Code Starts.a
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.increasingNumbers(N);
        for(auto num : ans){
            cout<< num <<" ";
        }
        cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends