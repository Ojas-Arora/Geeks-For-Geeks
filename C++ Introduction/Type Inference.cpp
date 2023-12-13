//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
void fun(auto a){
    
    //code here
    
cout << typeid(a).name();
   
}

//{ Driver Code Starts.
 
int main()
{
    
    int t;
    cin >> t;
    
    while(t--){
        
        int c;
        cin>>c;
        if(c==1)
        {
            int a;
            cin >> a ;
            fun(a);
            
        }
        else if(c==2)
        {
            double a;
            cin >> a ;
            fun(a);
                
        }
        else
        {
            long long a;
            cin >> a ;
            fun(a);
        
        }cout<<endl;
    }
    return 0;
} 
// } Driver Code Ends
