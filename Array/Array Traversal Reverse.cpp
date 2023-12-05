//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void arrayTraversalReverse(int numbers[], int size){
      for(int i=size-1;i>-1;i--)
    {
        cout<<numbers[i]<<" ";
    }
}

//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        int numbers[n];
        for(int i = 0; i < n; i++){
            cin>>numbers[i];
        }
        arrayTraversalReverse(numbers, n);
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends
