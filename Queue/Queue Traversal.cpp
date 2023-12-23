//{ Driver Code Starts
//Initial Template for C++

// Printing the queue
#include <iostream>
#include <queue>

using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete the function
void TraveseMe(queue<int> q){
    
int n=q.size();
   for(int i=0;i<n;i++){
       cout<<q.front();
       q.pop();
   }

}


//{ Driver Code Starts.

int main ()
{
  int t;
  cin>>t;

  while(t--){

  int n;
  cin>>n;

  queue<int> myqueue;

  for (int i=1;i<=n;i++){
      myqueue.push(i);
  }

    TraveseMe(myqueue);
    cout<<endl;

}

  return 0;
}

// } Driver Code Ends
