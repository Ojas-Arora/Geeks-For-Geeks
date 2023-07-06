//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
bool isPrime(int n){

    if(n==1)return false;

    if(n==2||n==3)return true;

    if(n%2==0||n%3==0)

        return false;

    for(int i=5;i*i<=n;i=i+6)

        if(n%i==0||n%(i+2)==0)

            return false;

    return true;

}
//vector<int> v: containing N elements
// Find and return vector of elements containing
// prime number at prime index
vector<int> prime_at_prime(vector<int>v)
{
vector<int>ans;

    for(int i=0;i<v.size();i++){

        if(isPrime(i+1) && isPrime(v[i])){

            ans.push_back(v[i]);

        }

    }

    return ans;

}


//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int m;
	        cin>>m;
	        v.push_back(m);
	    }
	    vector<int>result=prime_at_prime(v);
	    for(auto i:result)
	    {
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}




// } Driver Code Ends
