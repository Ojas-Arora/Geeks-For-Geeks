//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
// Function to print the k numbers with most occurrences 

class Solution
{
    public:
    //Function to return the sum of frequencies of k numbers
    //with most occurrences in an array.
    int kMostFrequent(int arr[], int n, int k) 
    { 
      	unordered_map<int, int> mp;
    	int ans = 0;
    	vector<int> v;
    	
    	for(int i=0; i<n; i++){
    	    mp[arr[i]]++;
    	}
    	
    	for(auto i : mp){
    	    v.push_back(i.second);
    	}
    	
    	priority_queue<int, vector<int>, greater<int> > pq(v.begin(), v.begin()+k);
    	
    	for(int i=k; i<v.size(); i++){
    	    if(v[i] > pq.top()){
    	        pq.pop();
    	        pq.push(v[i]);
    	    }
    	}
    	
    	while(!pq.empty()){
    	    ans += pq.top();
    	    pq.pop();
    	}
    	
    	return ans;
    } 
};

//{ Driver Code Starts.
// Driver program to test above 
int main() 
{
	int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.kMostFrequent(arr, n, k) << endl; 
    }

	return 0; 
} 

// } Driver Code Ends
