//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<int> mst(V,0);
    vector<int> dist(V,INT_MAX);
    vector<int> parent(V,-1);
    dist[0]=0;
    for(int i=0;i<V-1;i++){
      int mini=INT_MAX;
      int u;
      for(int v=0;v<V;v++){
        if(mst[v]==0 && dist[v]<mini){
          mini=dist[v];
          u=v;
        }
      }
      mst[u]=1;
      for(auto nbr:adj[u]){
        int v=nbr[0];
        int w=nbr[1];
        if(!mst[v] && w<dist[v]){
          parent[v]=u;
          dist[v]=w;
        }
      }
    }
    int ans=0;
    for(int i=1;i<V;i++){
      ans+=dist[i];
    }
    return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends
