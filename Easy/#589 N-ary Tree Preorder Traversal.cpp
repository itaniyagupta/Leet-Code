class Solution {
public:
    void preord1(Node* root,vector<int>&res)
    {  
         res.push_back(root->val);
        // cout << root->val;
     
        for(int i=0;i<root->children.size();i++)
           
            preord1(root->children[i], res);
    }
    vector<int> preorder(Node* root) {
       
        vector<int> res;
        
        if(root == NULL){
            return res;
        }
        
        preord1(root, res);
        return res; 
    }
};