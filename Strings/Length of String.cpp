//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
    int lengthString(string str)
    {
             int i;
        for( i=0;str[i];i++);
        return i;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	string s;
	cin >> s;
	Solution obj;
	cout << obj.lengthString(s) << endl;
	}
	
	return 0;
	
}


// } Driver Code Ends
