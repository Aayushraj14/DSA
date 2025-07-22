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
        // Your code here
        queue<Node*>q;
        q.push(root);
        vector<vector<int>>result;
       
        
        while(!q.empty()){
            vector<int>ans;
            for(int i=0;i<q.size();i++){
                ans.push_back(q.front()->data);
                if(q.front()->left)
                q.push(q.front()->left);
                if(q.front()->right)
                q.push(q.front()->right);
                q.pop();
            }
            result.push_back(ans);
        }
        return result;
    }
};