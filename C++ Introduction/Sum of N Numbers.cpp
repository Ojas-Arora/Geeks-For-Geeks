//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int nSum(int n){
    int ans = (n*(n+1))/2;

    return ans;

}

//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--) {
        int n;
        cin>>n;
        int ans=nSum(n);
        cout<<ans<<endl;
    }
	
}
// } Driver Code Ends
