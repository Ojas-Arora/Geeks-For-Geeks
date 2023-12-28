//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        // creating two new arrays
        
        int len1 = m - l + 1;
        int len2 = r - m;
        int *firstArray = new int[len1];
        int *secondArray = new int[len2];
        
        // copy the first half to the first new Array
        int k = l;
        for (int i=0; i<len1; i++){
            firstArray[i] = arr[k++];
        }
        
        // copy the second half to the second new Array
        k = m + 1;
        for (int i=0; i<len2; i++){
            secondArray[i] = arr[k++];
        }
        
        // merge both the array
        int index1 = 0;
        int index2 = 0;
        k = l;
        while (index1 < len1 && index2 < len2){
            if (firstArray[index1] < secondArray[index2]){
                arr[k++] = firstArray[index1++];
            }
            else{
                arr[k++] = secondArray[index2++];
            }
        }
        
        while (index1 < len1){
            arr[k++] = firstArray[index1++];
        }
        
        while (index2 < len2){
            arr[k++] = secondArray[index2++];
        }
        
        delete []firstArray;
        delete []secondArray;
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        // base case
        if (l >= r){
            return;
        }
        
        int mid = l + (r - l)/2;
        
        // left array call
        mergeSort(arr, l, mid);
        
        // right array call
        mergeSort(arr, mid+1, r);
        
        // merge two sorted array
        merge(arr, l, mid, r);
    }
};


//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
