class Solution {
public:
    int ans =0;
    int diameter(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int left = diameter(root->left);
        int right = diameter(root->right);
        ans = max(ans, left+right);
        return max(left, right) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
    
        if(root==NULL){
            return 0;
        }
        diameter(root);
        return ans;
        
    }
    
};