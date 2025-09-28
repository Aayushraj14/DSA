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

        int leftans=height(root->left);
        int rightans=height(root->right);

        return max(leftans,rightans)+1;

    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;

        int leftTree=height(root->left);
        int rightTree=height(root->right);

        bool ans=(abs(leftTree-rightTree)<=1)?true:false;
        bool op1=isBalanced(root->left);
        bool op2=isBalanced(root->right);

        return (ans && op1 && op2);
    }
};