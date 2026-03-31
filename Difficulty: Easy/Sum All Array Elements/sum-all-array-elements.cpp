class Solution {
  public:
    int arraySum(int arr[], int size) {
        // Initialize sum variable to 0
        int sum = 0;
        
        // Iterate through each element of the array
        for (int i = 0; i < size; i++) {
            // Add the current element to the sum
            sum += arr[i];
        }
        
        // Return the final total
        return sum;
    }
};