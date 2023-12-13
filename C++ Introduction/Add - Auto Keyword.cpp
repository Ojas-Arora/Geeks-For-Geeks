//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//code below 
//write a function add() taking two parameters a and b
//returning a value by adding them

  auto add(auto a, auto b){
 
    return a + b;
        
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
            int a, b;
            cin >> a >> b ;
            cout << add(a, b) << endl;
            
        }
        else if(c==2)
        {
            double a, b;
            cin >> a >> b ;
            cout << add(a, b) << endl;
                
        }
        else
        {
            long long a, b;
            cin >> a >> b ;
            cout << add(a, b) << endl;
        
        }
    }
    return 0;
} 
// } Driver Code Ends
