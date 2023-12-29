//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

string lexi_string(string s)
{
     string ans;
    int n = s.size();
    ans = s;
    for(int i=0;i<n;i++){
        char ch  = s[0];
        s.erase(s.begin());
        s += ch;
        ans = min(ans,s);
    }
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        string ans= lexi_string(s);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends
