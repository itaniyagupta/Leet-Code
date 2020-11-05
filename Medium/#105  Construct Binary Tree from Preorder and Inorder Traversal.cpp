class Solution {
public:
    TreeNode*  buildTreeHelper(vector<int>& inorder, vector<int>&  preorder, int inS, int inE, int preS, int preE){
          
          if(inS > inE)
          {
              return NULL;
          }

           int rootData = preorder[preS];
           int rootIndex = -1;
            for(int i=inS; i<=inE; i++)
            {
                if(inorder[i]== rootData)
                {
                    rootIndex = i;
                    break;
                }
            }

           int LinS = inS;
           int LinE = rootIndex - 1;
           int LpreS = preS + 1;
           int LpreE = LinE - LinS + LpreS ;
           int RinS = rootIndex + 1;
           int RinE = inE;
           int RpreS = LpreE + 1;
           int RpreE = preE;

           TreeNode* root = new TreeNode(rootData);
           root->left= buildTreeHelper(inorder, preorder, LinS, LinE, LpreS, LpreE);
           root->right=buildTreeHelper(inorder, preorder, RinS, RinE, RpreS, RpreE);
          
           return root;
}
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        return buildTreeHelper(inorder, preorder, 0, preorder.size()-1, 0, inorder.size()-1);
        
    }
};