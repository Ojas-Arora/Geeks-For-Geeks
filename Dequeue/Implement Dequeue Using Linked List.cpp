//{ Driver Code Starts
// Initial Template for C++

// C++ implementation of Deque using
// doubly linked list
#include <bits/stdc++.h>

using namespace std;

// Node of a doubly linked list
struct Node {
    int data;
    Node* prev, *next;
    // Function to get a new node
    static Node* getnode(int data) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data;
        newNode->prev = newNode->next = NULL;
        return newNode;
    }
};

// A structure to represent a deque
class Deque {
    Node* front;
    Node* rear;
    int Size;

  public:
    Deque() {
        front = rear = NULL;
        Size = 0;
    }

    // Operations on Deque
    void insertFront(int data);
    void insertRear(int data);
    void deleteFront();
    void deleteRear();
    int getFront();
    int getRear();
    bool isEmpty();
};

// Function to check whether deque
// is empty or not
bool Deque::isEmpty() {
    return (front == NULL);
}

// Function to return the element
// at the front end
int Deque::getFront() {
    // If deque is empty, then returns
    // garbage value
    if (isEmpty()) return -1;
    return front->data;
}

// Function to return the element
// at the rear end
int Deque::getRear() {
    // If deque is empty, then returns
    // garbage value
    if (isEmpty()) return -1;
    return rear->data;
}


// } Driver Code Ends
// User function Template for C++

/*struct Node
{
    int data;
    Node *prev, *next;
    // Function to get a new node
    static Node* getnode(int data)
    {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data;
        newNode->prev = newNode->next = NULL;
        return newNode;
    }
};
*/

void Deque::insertFront(int data) {
  Node *temp = new Node;
    temp->data = data;
    Size++;
    temp->next = temp->prev = nullptr;
    if(front==nullptr and rear==nullptr){
        front = rear = temp;
        return;
    }
    temp->next = front;
    front->prev = temp;
    front = temp;
}

// Function to insert an element
// at the rear end
void Deque::insertRear(int data) {
    Node *temp = new Node;
    temp->data = data;
    Size++;
    temp->next = temp->prev = nullptr;
    if(front==nullptr and rear==nullptr){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    temp->prev = rear;
    rear = temp;
}

// Function to delete the element
// from the front end
void Deque::deleteFront() {
    if(front==nullptr and rear==nullptr) return;
    Size--;
    if(front==rear){
        front = rear = nullptr;
        return;
    }
    Node *temp = front;
    front = front->next;
    front->prev = nullptr;
    delete temp;
}

// Function to delete the element
// from the rear end
void Deque::deleteRear() {
    if(front==nullptr and rear==nullptr) return;
    Size--;
    if(front==rear){
        front = rear = nullptr;
        return;
    }
    Node *temp = rear;
    rear = rear->prev;
    rear->next = nullptr;
    delete temp;
}

//{ Driver Code Starts.

// Driver program to test above
int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        Deque dq;

        while (q--) {

            string qt;
            cin >> qt;

            if (qt == "ir") {
                int data;
                cin >> data;
                dq.insertRear(data);
            } else if (qt == "if") {
                int data;
                cin >> data;
                dq.insertFront(data);

            } else if (qt == "dr") {
                dq.deleteRear();
            } else if (qt == "df") {
                dq.deleteFront();
            }
        }

        cout << dq.getFront() << endl;
        cout << dq.getRear() << endl;
    }
    return 0;
}

// } Driver Code Ends
