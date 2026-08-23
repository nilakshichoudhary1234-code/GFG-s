class Solution {
    public:
      vector<int> lcmAndGcd(int a, int b) {
          // Find GCD using Euclid's Algorithm
          int originalA = a;
          int originalB = b;

          while (b != 0) {
              int temp = b;
              b = a % b;
              a = temp;
          }

          int gcd = a;

          // Relationship: LCM * GCD = a * b
          int lcm = (originalA / gcd) * originalB;

          return {lcm, gcd};
      }
  };