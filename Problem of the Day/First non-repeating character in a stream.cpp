//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
	vector<pair<int,int>>freq(26,{0,-1});
		    int n = A.size();
		    string ans;
		    
		    for(int i=0;i<n;i++){
		        freq[A[i]-'a'].first++;
		        freq[A[i]-'a'].second = i;
		        int mini = n;
		        
		        for(int i=0;i<26;i++){
		            if(freq[i].first == 1 && freq[i].second<mini)mini = freq[i].second;
		        }
		        
		        ans+=(mini == n)?'#':A[mini];
		    }
		    
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
