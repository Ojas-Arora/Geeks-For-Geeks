//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

vector<int> greater_height(vector<int>v)
{
     set<int>s;
    vector<int>ans(v.size(),-1);
    for(int i=0;i<v.size();i++){
        auto it=s.upper_bound(v[i]);
        if(it!=s.end())  ans[i]=*it;
        s.insert(v[i]);
    }
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        vector<int> result=greater_height(v);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
