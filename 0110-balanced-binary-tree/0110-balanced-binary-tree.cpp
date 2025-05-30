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
    int height(TreeNode*root){
        if(root==NULL)return 0;
        int lheight=height(root->left);
        int rheight=height(root->right);
        return max(lheight,rheight)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);

        int lheight=height(root->left);
        int rheight=height(root->right);
        bool curr;
        if(abs(lheight-rheight)>1) curr= false;
        else curr= true;
        if(l && r && curr)return true;
        else return false;

    }
};