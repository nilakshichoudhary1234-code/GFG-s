class Solution {
  public:
    int factorial(int n) {
        // code here
        int res = 1;
        
        // Multiply res by every number from 2 to n
        for (int i = 2; i <= n; i++) {
            res *= i;
        }
        
        return res;
    }
};