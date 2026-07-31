class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long n = arr.size() + 1;
        long long totalSum = (n * (n + 1)) / 2;
        
        for (int num : arr) {
            totalSum -= num;
        }
        
        return totalSum;
    }
};