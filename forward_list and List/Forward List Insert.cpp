//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// arr[]: insert the elements of array to forwardList
// n: is the size of array
//Complete the function
forward_list<int> insertIntoFL(int arr[],int n)
{
     forward_list<int> ls;
    for(int i=0;i<n;i++){
        ls.push_front(arr[i]);
    }
    return ls;
}


//{ Driver Code Starts.



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    
	    
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	       arr[i]=x;
	    }
	    
	    forward_list<int> temp=insertIntoFL(arr,n);
	    
	    for(auto i:temp)
	    cout<<i<<" ";
	    
	    cout<<endl;
	    
	    
	    
	    
	}
	return 0;
}
// } Driver Code Ends
