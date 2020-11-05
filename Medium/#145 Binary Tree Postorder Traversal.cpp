class Solution {
public:
    void postord1(TreeNode* root,vector<int>&res)
    {
        if(root == NULL){
        return;
        }
        
          postord1(root->left, res); 
          postord1(root->right, res);
          res.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
 
        postord1(root, res);
        return res;  
    }
};
