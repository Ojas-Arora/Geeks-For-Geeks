//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void utility(int a, int d, int n){
    //Complete the code above
    int ans = (a+(n-1)*d);
    //Complete the code above
    
    //The line below prints the output. Don't change it!
    cout << ans << endl;
}

//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--) {
            int a, d, n;
            cin>>a>>d>>n;
            utility(a, d, n);
        }
	
}
// } Driver Code Ends
