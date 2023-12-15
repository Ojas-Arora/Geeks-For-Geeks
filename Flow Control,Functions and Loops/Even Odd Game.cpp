//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void utility(int number){

if(number%2 == 0){
cout<<"Friend";
} 
else
cout<<"You";
    
    
}

//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--){
	    int number; cin>>number;
        utility(number);
        cout<<endl;
	}
	
}
// } Driver Code Ends
