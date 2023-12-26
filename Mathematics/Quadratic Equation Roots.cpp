//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
          vector<int> v;
    
    int D = b * b - 4 * a * c;
    if (D < 0) {
        return {-1};
    }
    
    double x1 = (-b + sqrt(D)) / (2.0 * a);
    double x2 = (-b - sqrt(D)) / (2.0 * a);
    double x3 = max(x1, x2);
    double x4 = min(x1, x2);
    
    v.push_back(floor(x3));
    v.push_back(floor(x4));
    return v;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
