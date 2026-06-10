class Solution {
public:
    int getMaxVal(vector<int> &arr, int k) {
        // Sort the array in descending order
        sort(arr.begin(), arr.end(), greater<int>());
        
        int totalSum = 0;
        // Pick the top k largest elements
        for (int i = 0; i < k && i < arr.size(); i++) {
            totalSum += arr[i];
        }
        
        return totalSum;
    }
};