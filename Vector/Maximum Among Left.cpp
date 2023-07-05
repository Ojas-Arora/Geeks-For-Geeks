//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

vector<int> maximum_from_left(vector<int>v)
{
     vector<int> vec;
   int max=v[0];
   for(int i=0;i<v.size();i++){
       if(max<v[i]){
           vec.push_back(i);
           max=v[i];
       }
   }
   return vec;
}

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   
	   vector<int>v;
	   int i;
	   for(i=0;i<n;i++)
	   {
	       int k;
	       cin>>k;
	       v.push_back(k);
	   }
	   vector<int> result=maximum_from_left(v);
	   for(auto i:result)
	   {
	       cout<<i<<" ";
	   }
	   cout<<endl;
	}
	return 0;
}
// } Driver Code Ends
