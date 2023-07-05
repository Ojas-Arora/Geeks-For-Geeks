//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
bool fun(pair<int,int> p1,pair<int,int> p2){
    if(p1.second==p2.second) return p1.first>p2.first;
    return p1.second>p2.second;
}

//Complete this function
vector<pair<int,int>> sortBySecond(vector<pair<int,int>> v)
{
sort(v.begin(),v.end(),fun);
    return v;
}


//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<pair<int,int>>v;
	    
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        int h;
	        cin>>a>>h;
	        
	        v.push_back({a,h});
	    }
	    
	    
	    vector<pair<int,int>>temp = sortBySecond(v);
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<"("<<temp[i].first<<","<<temp[i].second<<") ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}


// } Driver Code Ends
