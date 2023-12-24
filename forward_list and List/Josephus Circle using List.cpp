//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int josephus(int n, int k){
    list<int> ls;
    for(int i=0;i<n;i++){
        ls.push_back(i);
    }
    auto it = ls.begin();
    while(ls.size()>1){
        for(int i=1;i<k;i++){
            it++;
            if(it==ls.end()){
                it = ls.begin();
            }
        }
        it = ls.erase(it);
        if(it==ls.end()){
            it = ls.begin();
        }
    }
    return *it+1;
}

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    
    while(t-- > 0){
        int n,k;
        cin>>n>>k;
        
        cout<<josephus(n,k)<<"\n";
    }
    
    return 0;
}
// } Driver Code Ends
