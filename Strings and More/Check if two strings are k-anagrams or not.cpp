//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
               int s1=str1.size();
        int s2=str2.size();
        
        if (s1!=s2) return 0;
        
        
        unordered_map<char, int> mpp;
        
        for(auto it: str1) mpp[it]++;
        for(auto it: str2 ) mpp[it]--;
        
        int add=0;
        for(auto it: mpp) add+=abs(it.second);
        
        return (add/2)<=k;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends
