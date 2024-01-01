//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
    int countVowels(string str){
        
         string copy="";
       int count=0;
       int arr[26]={0};
       for(int i=0;i<str.length();i++)
       {
           if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
           {
               arr[str[i]-'a']++;
               if(arr[str[i]-'a']==1)
               {
                   count++;
               }
               
           }
       }
       return count;
        
    }
};

//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{

	string s;
	cin >> s;
	Solution obj;
	cout << obj.countVowels(s) << endl;
	
	}
	return 0;
	
}


// } Driver Code Ends
