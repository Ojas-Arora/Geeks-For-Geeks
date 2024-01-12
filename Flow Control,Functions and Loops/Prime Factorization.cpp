//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// This function should print the prime factorization
// of the number n
// The new line is given by the driver's code.
void printPrimeFactorization(int n){
     for (int i = 2; i <= n; i++)
    {
        if (0 == (n % i))
        {
            cout << i << " ";
            printPrimeFactorization(n / i);
            break;
        }
    }
    
}

//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
            
        printPrimeFactorization(n);
            
        cout<<endl;
	}
}
// } Driver Code Ends
