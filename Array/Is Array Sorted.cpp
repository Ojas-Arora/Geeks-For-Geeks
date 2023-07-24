//{ Driver Code Starts
//Initial Template for C++


#include<iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    
    int isSorted(int arr[],int n)
    {
    bool is_sorted = true;
        for(int i = 1; i < n - 1; i++)
        {
            if( arr[i-1] > arr[i] && arr[i+1] > arr[i] || arr[i-1] < arr[i] && arr[i+1] < arr[i] )
            {
                is_sorted = false;
            }
        }
        return is_sorted;
    }
};

//{ Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    Solution obj;
	    cout<<obj.isSorted(arr,N);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends
