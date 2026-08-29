class Solution {
    public:
      vector<int> leaders(vector<int>& arr) {
          vector<int> result;
          int n = arr.size();
          int maxFromRight = arr[n - 1];

          // The rightmost element is always a leader
          result.push_back(maxFromRight);

          // Traverse the array from right to left
          for (int i = n - 2; i >= 0; i--) {
              if (arr[i] >= maxFromRight) {
                  maxFromRight = arr[i];
                  result.push_back(maxFromRight);
              }
          }

          // Reverse the result to restore original order
          reverse(result.begin(), result.end());

          return result;
      }
  };