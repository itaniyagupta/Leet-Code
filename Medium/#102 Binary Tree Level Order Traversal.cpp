class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> res;
        
          if(root == NULL){
            return res;
        }
        
        queue<TreeNode*> temp;
        temp.push(root);
        
        while(temp.size() != 0)
        {
              int count=0;
            vector<int> res1;
             int s =temp.size();
               
            for(int i=0;i<s;i++)
            {
                TreeNode* front = temp.front();
                res1.push_back(front->val);
                temp.pop();
                
                if(front->left!=NULL){
                    count++;
                    temp.push(front->left);
                }
                if(front->right!=NULL){
                    count++;
                    temp.push(front->right);
                }
            }
            
            res.push_back(res1);
        }
        return res;
        
    }
};