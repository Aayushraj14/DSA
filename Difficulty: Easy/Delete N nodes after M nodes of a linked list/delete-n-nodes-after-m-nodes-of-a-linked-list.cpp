/*
delete n nodes after m nodes
  The input list will have at least one element
  Node is defined as

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    Node* linkdelete(Node* head, int n, int m) {
        // code here
        Node* current=head;
        Node* temp;
        while(current){
        for(int i=1;i<m && current!=NULL;i++){
            current=current->next;
        }
        if(current==NULL)break;
        temp=current->next;
        for(int i=0;i<n&& temp!=NULL;i++){
            Node*deleteNode=temp;
            temp=temp->next;
            deleteNode->next=NULL;
            delete(deleteNode);
        }
        current->next=temp;
        current=temp;}
        return head;
    }
};