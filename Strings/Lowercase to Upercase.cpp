//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
    string caseConversion(string str){
        
              for(int i=0;i<str.size();i++){
           str[i]=toupper(str[i]);
       }
        return str;
        
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
	cout << obj.caseConversion(s) << endl;
	
	}
	
	return 0;
	
}


// } Driver Code Ends
