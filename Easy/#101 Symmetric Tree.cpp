class Solution {
public:
   
    bool isMirror(TreeNode* LeftSubTree, TreeNode* RightSubTree) {
        if (LeftSubTree == NULL && RightSubTree == NULL) {
            return true;
        }
        else if (LeftSubTree == NULL || RightSubTree == NULL) {
            return false;
        }
        return LeftSubTree->val == RightSubTree->val && isMirror(LeftSubTree->left,  RightSubTree->right) && isMirror(LeftSubTree->right,  RightSubTree->left);                
   
    }
    
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        return isMirror(root->left, root->right);
    }
};