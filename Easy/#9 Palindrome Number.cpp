class Solution {
public:
    bool isPalindrome(int x) {
         
     long int reverse=0, value;
       value = x;
        while(x>0)
        {
            reverse=reverse*10 + x%10;
            x=x/10;
            
        }
        if (value == reverse)
        {
           return true;
        }
        else 
            return false;
        
    }
     
};