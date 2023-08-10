//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void scientific(double a)
{
    cout<<scientific<<setprecision(4)<<a;
   
}

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    double a;
	    cin>>a; 
	    scientific(a);
	    cout<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends
