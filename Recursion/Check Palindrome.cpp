//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
     int reverser(int n) {
        if (n < 10) {
            return n;
        }
        return (n % 10) * pow(10, to_string(n).length() - 1) + reverser(n / 10);
    }
    
    bool isPalin(int N) {
        return N == reverser(N);
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
	    Solution obj;
	    cout<<obj.isPalin(N)<<endl;
	}
	return 0;
}
// } Driver Code Ends
