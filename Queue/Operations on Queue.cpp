//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
    //Function to push an element in queue.
     void enqueue(queue<int> &q,int x)
    {
       q.push(x);
    }
     
    void dequeue(queue<int> &q)
    {
        q.pop();
    }
    
    int front(queue<int> &q)
    {
        return q.front();
    }
    
    string find(queue<int> q, int x)
    {
        
        while(q.size())
         {
             if(q.front()==x) return "Yes";
              q.pop();
             
         }
        
        return "No";
        
    }
};

//{ Driver Code Starts.


int main() {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    queue<int> s;
	    int q;
	    cin>>q;
	    Solution ob;
	    while(q--){
	        char ch;
	        cin>>ch;
	        
	        if(ch=='i')
	        {
	            int x;
	            cin>>x;
	            
	            ob.enqueue(s,x);
	            
	        }
	        else if(ch=='r')
	        {
	            ob.dequeue(s);
	        }
	        else if(ch=='h')
	        {
	            cout << ob.front(s) << endl;
	        }
	        else if(ch=='f')
	        {
	            int x;
	            cin>>x;
	            cout << ob.find(s,x) << endl;
	        }
	        
	    }
	}
	return 0;
}



// } Driver Code Ends
