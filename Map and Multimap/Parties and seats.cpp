//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/* print the name of the parties along with seats
   they got in election and print the maximum seat
   received
*/
void Election2019( char party[], int seats[], int n ) {
    map< char, int > smap;
    int smax{};
    while ( n-- )
        smap[ party[ n ]] = seats[ n ],
        smax = max( smax, seats[ n ]);
    for ( const auto& p : smap )
        cout << p.first << ' ' << p.second << '\n';
    cout << smax << endl;
}

//{ Driver Code Starts.
    
int main() {
	
		int t; 
		cin>>t;
		while(t--)
		{
		    int n; 
		    cin>>n;
		    char party[n];
		    int seats[n];
		    for(int i = 0; i < n; i++)
		        cin>>party[i]; 
		     
		    for(int i = 0; i < n; i++)
		        cin>>seats[i];
		     
		    Election2019(party, seats, n);
		}
}
// } Driver Code Ends
