class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(root == NULL){
            return 0;
        }
        int temp1 = maxDepth(root->left);
        int temp2 = maxDepth(root->right);
       
        return 1 + std::max(temp1, temp2);
    }
};