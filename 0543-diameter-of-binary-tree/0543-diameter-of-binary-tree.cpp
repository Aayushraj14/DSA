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
        if(root==NULL)return 0;
        int lHeight=height(root->left)+1;
        int rHeight=height(root->right)+1;
        return max(lHeight,rHeight);

    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        int op1=leftHeight+rightHeight;
        int op2=diameterOfBinaryTree(root->left);
        int op3=diameterOfBinaryTree(root->right);
        return max(op1,max(op2,op3));
    }
};