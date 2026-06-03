//Back-end complete function Template for C++

int minDiff(vector<int> &arr, int k) {
    int n = arr.size();
    
    // If there are no students or no packets, or packets are fewer than students
    if (k == 0 || n == 0 || n < k) {
        return 0; 
    }
    
    // Step 1: Sort the array
    std::sort(arr.begin(), arr.end());
    
    int min_diff = INT_MAX;
    
    // Step 2 & 3: Slide a window of size k across the sorted array
    for (int i = 0; i <= n - k; i++) {
        int current_diff = arr[i + k - 1] - arr[i];
        
        // Step 4: Find the absolute minimum difference
        if (current_diff < min_diff) {
            min_diff = current_diff;
        }
    }
    
    return min_diff;
    
}