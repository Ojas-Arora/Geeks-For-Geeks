//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    bool isPanagram(string str){
    
    if(str.length()<26) return false;
    bool visited[26] = {false};
    for(int i=0; i<str.length(); i++) {
        char x = str[i];
        if(x>='a' && x<='z') visited[x-'a'] = true;
        if(x>='A' && x<='Z') visited[x-'A'] = true;
    }
    for(int i=0; i<26; i++) {
        if(visited[i] == false) return false;
    }
    return true;
    
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
	cout << obj.isPanagram(s) << endl;
	}
	
	return 0;
	
}


// } Driver Code Ends
