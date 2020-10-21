class Solution {
public:
    int fib(int N) {
        
        if(N==0 || N==1)
        {
            return N;
        }
        
        int a=fib(N-1);
        int b=fib(N-2);
        
        return a+b;
        
    }
};