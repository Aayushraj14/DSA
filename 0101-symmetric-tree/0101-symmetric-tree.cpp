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
    bool identical(TreeNode* p,TreeNode* q){
        if(p==NULL && q==NULL)return true;
        if(p==NULL && q!=NULL)return false;
        if(p!=NULL && q==NULL)return false;

        if(p->val!=q->val)return false;

        bool ans1=identical(p->right,q->left);
        bool ans2=identical(p->left,q->right);
        return ans1&&ans2;
    }
    bool isSymmetric(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)return true;

        TreeNode*p=root->left;
        TreeNode*q=root->right;
        return identical(p,q);
    }
};