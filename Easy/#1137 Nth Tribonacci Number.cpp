class Solution {
public:
    int tribonacci(int n, int a = 0, int b = 1, int c = 1) {
       
        if (n <= 1) 
        {
            return n;
        }
        if (n == 2)
        {
            return c;
        }
        
//      Normal Recursion
//        if(n==0)
//         {
//             return 0;
//         }
//         if(n==1)
//         {
//             return 1;
//         }
//         if(n==2)
//         {
//             return 1;
//         }
        
//         int a = tribonacci(n-1);
//         int b = tribonacci(n-2);
//         int c = tribonacci(n-3);
        
        return tribonacci(n - 1, b, c, a + b + c);
    }
};