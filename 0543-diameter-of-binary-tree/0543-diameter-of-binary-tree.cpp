/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL)return NULL;

        int leftans=height(root->left);
        int rightans=height(root->right);

        return max(leftans,rightans)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;

        int op1=diameterOfBinaryTree(root->left);
        int op2=diameterOfBinaryTree(root->right);

        int leftheight=height(root->left);
        int rightheight=height(root->right);

         int op3=(leftheight+rightheight);
         return max({op1,op2,op3});
    }
};