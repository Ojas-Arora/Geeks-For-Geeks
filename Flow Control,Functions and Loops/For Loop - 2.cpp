//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void utility(string s){
    for(int i = 0;i<s.size();i++)
    if(i%2==0)
    cout<<s[i];
    
}

//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    string s; cin>>s; 
        utility(s);
        cout<<endl;
	}
}
// } Driver Code Ends
