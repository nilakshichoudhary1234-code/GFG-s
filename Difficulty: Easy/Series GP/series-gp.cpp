class Solution {
  public:
    // Helper function to perform modular exponentiation
    long long power(long long base, long long exp) {
        long long res = 1;
        long long mod = 1000000007;
        base %= mod;
        while (exp > 0) {
            if (exp % 2 == 1) res = (res * base) % mod;
            base = (base * base) % mod;
            exp /= 2;
        }
        return res;
    }

    int nthTerm(int a, int r, int n) {
        long long mod = 1000000007;
        
        // Handle the base case where n = 1
        if (n == 1) return a % mod;
        
        // Calculate r^(n-1) % mod
        long long r_pow_n_minus_1 = power(r, n - 1);
        
        // Calculate (a * r^(n-1)) % mod
        // 1LL is used to ensure multiplication happens in long long range
        long long ans = (1LL * a * r_pow_n_minus_1) % mod;
        
        return (int)ans;
    }
};