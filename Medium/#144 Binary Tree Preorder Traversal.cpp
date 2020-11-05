class Solution {
public:
     void preord1(TreeNode* root,vector<int>&res)
    {
        if(root == NULL){
        return;
        }
          res.push_back(root->val);
          preord1(root->left, res); 
          preord1(root->right, res);
         
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> res;
 
        preord1(root, res);
        return res;  
        
    }
};