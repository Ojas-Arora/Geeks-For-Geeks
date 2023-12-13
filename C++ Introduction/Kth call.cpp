//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
// User function Template for C++

void utility() {

    // declare the variable count here
static int count=0;
    // increases the value of count by 1
    count++;

    // print count
    cout << count;
}

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    int n;
    cin >> n;

    while (n--) {

        utility();
        cout << " ";
    }

    return 0;
}
// } Driver Code Ends
