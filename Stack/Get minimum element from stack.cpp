//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    public:
    
         int getMin(){
           if(s.empty()) return -1;
           
           return minEle;
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(s.empty()) return -1;
           
           int x = 0;
           if(s.top() >= minEle){
               x = s.top();
               s.pop();
           }
           else if(s.top() < minEle){
               x = minEle;
               int prevMinEle = 2*minEle - s.top();
               minEle = prevMinEle;
               s.pop();
           }
           return x;
       }
       
       /*push element x into the stack*/
       void push(int x){
           if(s.empty()){
               s.push(x);
               minEle = x;
           }
           else if(x < minEle){
               int flag = (2*x) - minEle;
               s.push(flag);
               minEle = x;
           }
           else if(x >= minEle){
               s.push(x);
           }
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends
