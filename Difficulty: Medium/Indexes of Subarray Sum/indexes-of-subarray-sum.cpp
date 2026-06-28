class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();
        int left = 0;
        long long current_sum = 0;

        for (int right = 0; right < n; right++) {
            current_sum += arr[right];

            // Shrink the window from the left if current_sum exceeds target
            while (current_sum > target && left < right) {
                current_sum -= arr[left];
                left++;
            }

            // Check if we found the target sum
            if (current_sum == target) {
                return {left + 1, right + 1}; // 1-based indexing
            }
        }

        // If no subarray is found
        return {-1};
    }
};