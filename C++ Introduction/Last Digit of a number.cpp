//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void utility(int n){

    //just complete below statement
    int ans =abs(n) % 10;

    //print the result
    cout << ans <<endl;
}

//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--) {
        int n; cin>>n;
        utility(n);
    }
	
}
// } Driver Code Ends
