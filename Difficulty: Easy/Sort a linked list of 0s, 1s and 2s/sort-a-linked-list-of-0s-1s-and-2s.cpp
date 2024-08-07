//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        if(head==NULL || head->next==NULL) return head;
        Node* zero=new Node(-1);
        Node* one=new Node(-1);
        Node* two=new Node(-1);
        Node* cur1=zero;
        Node* cur2=one;
        Node* cur3=two;
        Node* temp=head;
        while(temp)
        {
            if(temp->data==0)
            {
                Node* newnode1=new Node(0);
                cur1->next=newnode1;
                cur1=newnode1;
            }
            else if(temp->data==1)
            {
                Node* newnode2=new Node(1);
                cur2->next=newnode2;
                cur2=newnode2;
            }
            else 
            {
                Node* newnode3=new Node(2);
                cur3->next=newnode3;
                cur3=newnode3;
            }
            temp=temp->next;
        }
        cur1->next=(one->next)?one->next:two->next;
        cur2->next=two->next;
        cur3->next=NULL;
        return zero->next;
        
    }
};



//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends