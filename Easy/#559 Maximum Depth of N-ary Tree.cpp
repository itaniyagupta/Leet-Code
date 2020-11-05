class Solution {
public:
    int maxDepth(Node* root) {
     if(root == NULL)
     {
         return 0;
     }
        int max = 0;
        
        for(int i=0; i< root->children.size(); i++){
            int temp = maxDepth(root->children[i]);
            if(temp > max){
                max = temp;
            }
        }
        return max+1;
    }
};