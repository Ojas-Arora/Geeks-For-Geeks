#include <bits/stdc++.h>
using namespace std;

// Comparator function to sort according to
// second element
bool sortbysec(const pair<int, int>& p1,
               const pair<int, int> p2)
{
    return p1.second < p2.second;
}

// Function to sort students data
// according to marks
void displaySorted(int roll_no[], int marks[], int n)
{
    // Create a vector of pair to
    // store students data
    vector<pair<int, int> > vp;

    // Traverse the arrays and store elements in vector
    for (int i = 0; i < n; i++) {
        vp.push_back(make_pair(roll_no[i], marks[i]));
    }

    // Sort the vector according to second element
    // using Comparator function
    sort(vp.begin(), vp.end(), sortbysec);

    // Print the sorted vector
    cout << "Roll No"
         << "   "
         << "Marks\n";
    for (int i = 0; i < vp.size(); i++) {
        cout << vp[i].first << "\t  " << vp[i].second << "\n";
    }
}

// Driver Code
int main()
{
    // Input
    int roll_no[] = { 17, 20, 15, 1, 5 };
    int marks[] = { 80, 75, 93, 78, 84 };
    int n = sizeof(roll_no) / sizeof(roll_no[0]);

    displaySorted(roll_no, marks, n);

    return 0;
}
