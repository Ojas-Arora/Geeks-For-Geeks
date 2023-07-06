//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int minimum_vertical_sum(vector<vector<int>>v)
{
        

    int sum=0,min=INT_MAX, max=0;

    int n=v.size();

    for(int i=0; i<n; i++)

    {

        if(v[i].size() > max ) max=v[i].size();   

    }

    for(auto i=0; i<max; i++)

    {

        for(auto j=0; j<n; j++)

        {

            if(v[j].size()>i)

            {

            sum+= v[j][i];

            }

        }

        if(sum<min)

        {

            min=sum;        

        }

     sum=0;

    }

return min;

}

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<vector<int>>v;
	    for(int i=0;i<n;i++)
	    {
	        int m;
	        cin>>m;
	        vector<int>temp;
	        for(int j=0;j<m;j++)
	        {
	            int k;
	            cin>>k;
	            temp.push_back(k);
	        }
	        v.push_back(temp);
	    }
	    int min_sum=minimum_vertical_sum(v);
	    cout<<min_sum<<endl;
	}
	return 0;
}

// } Driver Code Ends
