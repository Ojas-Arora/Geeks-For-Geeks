//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};

void displayList(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}



// } Driver Code Ends
//User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};

*/

Node * insertInSorted(Node * head, int data)
{
    Node *insert=new Node(data);

    Node *temp=head;

    if(head==NULL)

    {

        return insert;

    }

    if(head->next==NULL)

    {

        if(head->data<data)

        {

            head->next=insert;

            return head;

        }

        else

        {

            insert->next=head;

            head=insert;

            return head;

        }

    }

    if(head->data>data)

    {

        insert->next=head;

        head=insert;

        return head;

    }

    while(temp->next!=NULL)

    {

        if(temp->next->data>=data)

        {

            break;

        }

        temp=temp->next;

    }

    insert->next=temp->next;

    temp->next=insert;

    return head;
}


//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        cin >> data;
        head = insertInSorted(head, data);
        displayList (head);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
