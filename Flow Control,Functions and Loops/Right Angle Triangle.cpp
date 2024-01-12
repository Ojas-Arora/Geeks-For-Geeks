//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void triangleWall(int s){
  for(int i=1;i<=s;i++){
    //Write your code here
     for (int j=1;j<=s;j++){
      if(j<=i)
         cout<<"*"<<" ";
      else
         cout<<"";
}
cout<<"\n";
}
   
   
    
}

//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int s; cin>>s;
        triangleWall(s);
	}
}
// } Driver Code Ends
