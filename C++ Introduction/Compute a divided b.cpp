//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

double compute(int a, int b){
    
   double x, y;
    x = static_cast<double> (a);
    y = static_cast<double> (b);
    double z = x/y;
 
    if(a%b == 0){
        cout<<showpoint<<setprecision(2);}
    else{
        cout<<noshowpoint;
    }
    return z;
}

//{ Driver Code Starts.
 
int main()
{
    
    int t;
    cin >> t;
    
    while(t--){
        int a, b;
        cin >> a >> b ;
    
        cout << compute(a, b) << endl;
    }
    
    return 0;
} 
// } Driver Code Ends
