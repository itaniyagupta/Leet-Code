class Solution {
public:
     void postord1(Node* root,vector<int>&res)
    {  
     
        for(int i=0;i<root->children.size();i++)
        {
          postord1(root->children[i], res);  
        }
            res.push_back(root->val);
        // cout << root->val;
    }
    
    vector<int> postorder(Node* root) {
      
         vector<int> res;
        
          if(root == NULL){
            return res;
        }

        postord1(root, res);
        return res; 
        
    }
};