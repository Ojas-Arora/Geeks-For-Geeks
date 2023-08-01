//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void printArrayRecursively(int arr[],int n,int i=0)
    {
        if(i==n) 
          return;
        cout<<arr[i]<<" ";
        printArrayRecursively(arr,n,i+1);
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
	    Solution ob;
	    ob.printArrayRecursively(arr,N);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends
