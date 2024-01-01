//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int countVowels(string str)
{
    int cnt = 0,n = str.size();
    for(int i=0;i<n;i++){
        if(str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u'){
            cnt++;
        }
    }
    return cnt;
}

//{ Driver Code Starts.
    
int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    string str;
	    cin >> str;
	    cout << countVowels(str) << endl;
	}
}
// } Driver Code Ends
