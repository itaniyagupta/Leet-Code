class Solution {
public:
    int superPow(int a, vector<int>& b) {
        
         long ans = 1;
        for (int i = 0; i < b.size(); ++i) 
        {
            ans = pow(ans, 10) * pow(a, b[i]) % 1337;
        }
        return ans;
    }
    int pow(int x, int n) 
    {
        if (n == 0) return 1;
        if (n == 1) return x % 1337;
        return pow(x % 1337, n / 2) * pow(x % 1337, n - n / 2) % 1337;
    }
};