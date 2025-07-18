/* A binary tree node has data, pointer to left child
   and a pointer to right child

/*
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
    void solve(Node* root,vector<int>&ans){
        if(root==NULL)return;
        ans.push_back(root->data);
        solve(root->left,ans);
        solve(root->right,ans);
    }
    // Function to return a list containing the preorder traversal of the tree.
    vector<int> preorder(Node* root) {
        vector<int>ans;
        solve(root,ans);
        return ans;
        
    }
};