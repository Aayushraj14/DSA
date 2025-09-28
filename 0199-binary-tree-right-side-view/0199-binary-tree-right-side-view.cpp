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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        int result=0;

        while(q.size()){
            int len=q.size();
            for(int i=0;i<len;i++){
                 result=q.front()->val;
                if(q.front()->left)q.push(q.front()->left);
                if(q.front()->right)q.push(q.front()->right);

                q.pop();
            }
            ans.push_back(result);
        }
        return ans;
    }
};