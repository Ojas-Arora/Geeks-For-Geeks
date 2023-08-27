

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
*/

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
    Node* curr=head;
   
    while(curr->next){
        curr=curr->next;
        if(curr->next==head){
            return 1;  
            break;
        }
    }
    
    return 0;
}
