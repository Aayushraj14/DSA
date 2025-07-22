/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    vector<int> leftView(Node *root) {
        vector<int>ans;
         if (!root) return ans;

       queue<Node*>q;
       q.push(root);
       while(!q.empty()){
           int levelsize=q.size();
           for(int i=0;i<levelsize;i++){
               if(i==0)
               ans.push_back(q.front()->data);
               if(q.front()->left)
               q.push(q.front()->left);
               if(q.front()->right)
               q.push(q.front()->right);
               q.pop();
           }
       }
       return ans;
        
    }
};