//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void utility(int number){
   switch(number){
        case 1 : cout<<"One"; break;
        default: cout<<"Not One";
    }

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
