//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


map<int,int> mapInsert(int arr[],int n);
void mapDisplay(map<int,int>mp);
void mapErase(map<int,int>&mp,int x);


// } Driver Code Ends
//User function Template for C++
map< int, int > mapInsert( int a[], int n ) {
    map< int, int > m;
    while ( n-- ) m.insert({ a[ n ], n });
    return m;
}
void mapDisplay( map< int, int > m ) {
    for ( const auto& p : m )
        cout << p.first << ' ' << p.second << '\n';
}
void mapErase( map< int, int >& m, int x ) {
    const auto i{ m.find( x )};
    if ( i == m.cend() ) cout << "not found";
    else cout << "erased " << x, m.erase( i );
    cout << endl;
}

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n]; 
        for(int i=0;i<n;i++)
            cin>>arr[i]; //Taking input array
        
        map<int,int>mp=mapInsert(arr,n); //map insert function that returns a function
        mapDisplay(mp); //print the keys and values of the map
        int x;
        cin>>x; //element to be erased
        
        mapErase(mp,x); //the erase function
        mapDisplay(mp);
        
        
    }
	return 0;
}

// } Driver Code Ends
