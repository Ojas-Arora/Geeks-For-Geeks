//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


//Complete this function
string Sorted_Characters(string str)
{
    set<int>s;
    for(int i=0;i<str.length();i++){
        s.insert(str[i]);
    }return string(s.begin(), s.end());
}


//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	    string str;
	    cin>>str;
	    
	    string result;
	    result=Sorted_Characters(str);
	    cout<<result;
	    
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends
