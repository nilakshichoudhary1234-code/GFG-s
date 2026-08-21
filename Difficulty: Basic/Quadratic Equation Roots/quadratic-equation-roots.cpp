class Solution {
    public:
      vector<int> quadraticRoots(int a, int b, int c) {
          double d = (double)b * b - 4.0 * a * c;

          if (d < 0) {
              return {-1};
          }

          double root1 = (-b + sqrt(d)) / (2.0 * a);
          double root2 = (-b - sqrt(d)) / (2.0 * a);

          int r1 = floor(root1);
          int r2 = floor(root2);

          return {max(r1, r2), min(r1, r2)};
      }
  };