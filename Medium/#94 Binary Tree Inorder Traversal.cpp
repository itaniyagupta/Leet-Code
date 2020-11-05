class Solution {
public:
    void inord1(TreeNode* root,vector<int>&res)
    {
        if(root == NULL){
        return;
        }
          
          inord1(root->left, res); 
          res.push_back(root->val);
          inord1(root->right, res);
         
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
 
        inord1(root, res);
        return res;
    }
};
