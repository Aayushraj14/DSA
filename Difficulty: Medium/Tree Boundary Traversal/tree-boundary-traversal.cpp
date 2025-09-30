class Solution {
  public:
  
   // Left boundary (excluding leaves)
   void solveA(Node* root, vector<int>& leftTree) {
       if (!root || (!root->left && !root->right)) return;
       leftTree.push_back(root->data);
       if (root->left) solveA(root->left, leftTree);
       else solveA(root->right, leftTree);
   }
   
   // Leaf nodes
   void solveB(Node* root, vector<int>& leafTree) {
       if (!root) return;
       if (!root->left && !root->right) {
           leafTree.push_back(root->data);
           return;
       }
       solveB(root->left, leafTree);
       solveB(root->right, leafTree);
   }
   
   // Right boundary (excluding leaves) - collected in reverse
   void solveC(Node* root, vector<int>& rightTree) {
       if (!root || (!root->left && !root->right)) return;
       if (root->right) solveC(root->right, rightTree);
       else solveC(root->left, rightTree);
       rightTree.push_back(root->data); // add after recursion (reverse order)
   }
   
   vector<int> boundaryTraversal(Node *root) {
       if (!root) return {};
       
       vector<int> leftTree, leafTree, rightTree;
       vector<int> ans;
       
       ans.push_back(root->data); // root is always included
       
       // left boundary
       solveA(root->left, leftTree);
       // leaves
       solveB(root->left, leafTree);
       solveB(root->right, leafTree);
       // right boundary
       solveC(root->right, rightTree);
       
       // merge
       ans.insert(ans.end(), leftTree.begin(), leftTree.end());
       ans.insert(ans.end(), leafTree.begin(), leafTree.end());
       ans.insert(ans.end(), rightTree.begin(), rightTree.end());
       
       return ans;
   }
};
