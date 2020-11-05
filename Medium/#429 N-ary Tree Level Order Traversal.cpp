class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
      
        vector<vector<int>> res;
        
          if(root == NULL){
            return res;
        }
        
        queue<Node*> temp;
        temp.push(root);
        
        while(temp.size() != 0)
        {
            vector<int> res1;
             int s =temp.size();
            
            for(int i=0;i<s;i++)
            {
                Node *front = temp.front();
                res1.push_back(front->val);
                temp.pop();
                
                for(int j=0;j<front->children.size();j++)
                    temp.push(front->children[j]);
            }
            res.push_back(res1);
        }
        return res;
    }
};