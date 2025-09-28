/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // code here
        vector<vector<int>>ans;
        queue<Node*>q;
        q.push(root);
        
      
       while(q.size()){
            int len=q.size();
            vector<int>result;
          for(int i=0;i<len;i++){
          result.push_back(q.front()->data);
          if(q.front()->left)
          q.push(q.front()->left);
          if(q.front()->right)
          q.push(q.front()->right);
          
          q.pop();
           
       }
       ans.push_back(result);
       }
       return ans;
       
        
        
    }
};