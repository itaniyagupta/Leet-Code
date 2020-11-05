class Solution {
public:
   TreeNode*  buildTreeHelper(vector<int>& inorder, vector<int>&  postorder, int inS, int inE, int posS, int posE){
          
          if(inS > inE)
          {
              return NULL;
          }

           int rootData = postorder[posE];
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
           int LposS = posS;
           int LposE = LinE - LinS + LposS ;
           int RinS = rootIndex + 1;
           int RinE = inE;
           int RposS = LposE + 1;
           int RposE = posE-1;

           TreeNode* root = new TreeNode(rootData);
           root->left= buildTreeHelper(inorder, postorder, LinS, LinE, LposS, LposE);
           root->right=buildTreeHelper(inorder, postorder, RinS, RinE, RposS, RposE);
          
           return root;
}
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    
        return  buildTreeHelper(inorder, postorder, 0, postorder.size()-1, 0, inorder.size()-1);
        
    }
};