//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool myPrime(int N)
    {
        for(int i=2;i<=sqrt(N);i++) if(!(N%i)) return 0;return 1;
    }
    int exactly3Divisors(int N)
    {   int count=0;
        for(int i=2;i<=sqrt(N);i++) if(myPrime(i) and (i*i)<=N) count++;
        return count;
    }
};

//{ Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}
// } Driver Code Ends
