//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

int search(int in[] , int start , int end , int element){
    
    for(int i=start;i<=end;i++){
        if(in[i] == element){
            return i;
        }
    }
    return -1;
    
}
Node* solve(int in[], int post[], int n , int &postIndex , int start , int end){
    
    // base case
    if(start > end || postIndex < 0){
        return NULL;
    }
    
    // Process
    int element = post[postIndex];
    Node* root = new Node(post[postIndex--]);
    int pos = search(in,start,end,element);
    root->right = solve(in,post,n,postIndex,pos+1,end);
    root->left = solve(in,post,n,postIndex,start,pos-1);
    return root;
    
}
Node *buildTree(int in[], int post[], int n) {
    int postIndex = n-1;
    return solve(in,post,n,postIndex,0,n-1);
}
