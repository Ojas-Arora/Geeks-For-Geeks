//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
          vector<int> v(hashSize,-1);
        
        int size=0;
        for(int i=0;i<sizeOfArray;i++)
        {
            if(size<hashSize)
            {
                int key=arr[i]%hashSize;
                while(v[key]!=-1 && v[key]!=arr[i])
                    key=(key+1)%hashSize;
                if(v[key]==arr[i])
                    continue;
                else
                {
                    v[key]=arr[i];
                    size++;
                }
            }
            else
                return v;
        }
        return v;
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
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    vector<int> hash;
	    Solution obj;
	    hash = obj.linearProbing( hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}


// } Driver Code Ends
