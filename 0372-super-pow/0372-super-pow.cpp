class Solution {
public:
    int superPow(int a, vector<int>& b) {
        int mod = 1337;
        a = a % mod;
        int result = 1;
        
        for (int i = b.size() - 1; i >= 0; --i) {
            result = (result * modPow(a, b[i], mod)) % mod;
            a = modPow(a, 10, mod);
        }
        
        return result;
    }
    
    int modPow(int x, int y, int mod) {
        int res = 1;
        x = x % mod;
        
        while (y > 0) {
            if (y % 2 == 1) {
                res = (res * x) % mod;
            }
            x = (x * x) % mod;
            y = y / 2;
        }
        
        return res;
    }
};
