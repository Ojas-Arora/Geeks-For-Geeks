//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Quadratic Probing to handle collisions.
    void QuadraticProbing(vector <int>&hash, int hashSize, int arr[], int N)
    {
      for(int i=0;i<N;i++){
           int f=arr[i]% hashSize;
           if(hash[f]==-1){
               hash[f]=arr[i];
           }
           if(hash[f]==arr[i]){
               continue;
           }
           if(hash[f]!=-1 && hash[f]!=arr[i]){
               for(int j=1;j<hashSize;j++){
                   int g=(f+j*j)%hashSize;
                   if(hash[g]==-1){
                       hash[g]=arr[i];
                       break;
                   }
                   if(hash[g]!=-1 && hash[g]!=arr[i]){
                       continue;
                   }
                   if(hash[g]==arr[i]){
                       break;
                   }
               
           }
        }      
    }
    }


};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    
	    
	    int  N;
	    cin>>N;
	    int arr[N];
	    
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    
	    vector<int> hash (hashSize,-1);
	    Solution obj;
	    obj.QuadraticProbing (hash, hashSize, arr, N);
	    
	    for(int i = 0;i < hashSize; i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}



// } Driver Code Ends
