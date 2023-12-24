//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
   void deleteMid(stack<int>&s, int n)
    {
        
    int mid = n / 2;
    stack<int> tempStack;

    for (int i = 0; i < mid; ++i) {
        tempStack.push(s.top());
        s.pop();
    }

    s.pop(); // Remove the middle element

    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }


    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends
