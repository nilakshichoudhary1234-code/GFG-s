class Solution {
public:
    int nthFibonacci(int n) {
        // Handle base cases for F(0) and F(1)
        if (n <= 1) {
            return n;
        }

        int prev2 = 0; // Represents F(n-2)
        int prev1 = 1; // Represents F(n-1)
        int current;

        for (int i = 2; i <= n; i++) {
            current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }

        return current;
    }
};