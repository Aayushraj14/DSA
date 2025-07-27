/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    // bool check(Node* head,int val){
    //     Node* temp=head;
    //     while(temp){
    //         if(temp->data==val)return true;
    //         temp=temp->next;
    //     }
    //     return false;
    // }
    Node *removeDuplicates(Node *head) {
        set<int>set;
        Node*head2=new Node(-1);
        Node*tail2=head2;
        
        Node* curr=head;
        while(curr){
            if(set.find(curr->data)!=set.end()){
                 curr=curr->next;
            }
            else{
                set.insert(curr->data);
                Node* temp=curr;
                curr=curr->next;
                temp->next=NULL;
                tail2->next=temp;
                tail2=tail2->next;
            }
        }
        return head2->next;
    }
};