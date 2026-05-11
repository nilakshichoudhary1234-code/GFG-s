class Solution {
  public:
    int findMean(vector<int>& arr) {
        // 1. Declare and initialize sum to 0
        // Use long long to prevent overflow with large inputs
        long long sum = 0;
        int n = arr.size();
        
        // 2. Summing all elements
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        
        // 3. Return the floor of the mean
        // Integer division automatically handles the floor for positive numbers
        return sum / n;
    }
};