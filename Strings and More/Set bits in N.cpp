//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:    
    int setBitCount(int n) {
          int ans = 0;
        while(n){
            if(n&1) ans++;
            n /= 2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        Solution ob;
        
        cout <<ob.setBitCount(n) << endl;
    }
}



// } Driver Code Ends
