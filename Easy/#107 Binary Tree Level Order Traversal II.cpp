class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
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
                temp.pop();
                res1.push_back(front->val);
                
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
        reverse(res.begin(),res.end());
        return res;
    }
};