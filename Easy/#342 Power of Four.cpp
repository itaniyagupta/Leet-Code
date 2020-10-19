class Solution {
public:
    bool isPowerOfFour(int num) {
     
         for(int i=0; i<16; i++)
        {
            if (num == pow(4,i))
            {
                return true;
            }
        }
        return false; 
        
        
    }
};