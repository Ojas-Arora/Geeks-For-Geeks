//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int gcd(int a, int b){
 if(b==0) return a;
    return gcd(b,a%b);

        
}

//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int A, B; cin>>A>>B;
        int ans = gcd(A,B);
        cout<<ans<<endl;
	}
}
// } Driver Code Ends
