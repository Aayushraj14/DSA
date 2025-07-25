/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
      Node* zerohead=new Node(-1),*zerotail=zerohead;
      Node* onehead=new Node(-1),*onetail=onehead;
      Node* twohead=new Node(-1),*twotail=twohead;
      
      
      Node* curr=head;
      while(curr){
          Node* temp=curr->next;
          curr->next=NULL;
          if(curr->data==0){
              zerotail->next=curr;
              zerotail=zerotail->next;
          }else if(curr->data==1){
              onetail->next=curr;
              onetail=onetail->next;
          }else{
              twotail->next=curr;
              twotail=twotail->next;
          }
          curr=temp;
      }
      
      onehead=onehead->next;
      if(onehead!=NULL){
          zerotail->next=onehead;
          onetail->next=twohead->next;
      }
      else{
          zerotail->next=twohead->next;
      }
      return zerohead->next;
        
    }
};