class Solution {
public:
    int addDigits(int num) {
        
        int n=num;
        if(n%9==0 && n!=0) return 9;
        return n%9;
        
        
    }
};