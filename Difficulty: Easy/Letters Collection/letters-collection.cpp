class Solution {
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[]) {
        vector<int> results;

        for (int k = 0; k < q; k++) {
            int hop = queries[k][0];
            int r = queries[k][1];
            int c = queries[k][2];
            int sum = 0;

            // Define the boundaries for the current hop
            int top = r - hop;
            int bottom = r + hop;
            int left = c - hop;
            int right = c + hop;

            // 1. Traverse Top and Bottom rows
            for (int j = left; j <= right; j++) {
                // Top row
                if (top >= 0 && top < n && j >= 0 && j < m) {
                    sum += mat[top][j];
                }
                // Bottom row
                if (bottom >= 0 && bottom < n && j >= 0 && j < m) {
                    sum += mat[bottom][j];
                }
            }

            // 2. Traverse Left and Right columns 
            // (Exclude corners already added by the row loops)
            for (int i = top + 1; i <= bottom - 1; i++) {
                // Left column
                if (i >= 0 && i < n && left >= 0 && left < m) {
                    sum += mat[i][left];
                }
                // Right column
                if (i >= 0 && i < n && right >= 0 && right < m) {
                    sum += mat[i][right];
                }
            }

            results.push_back(sum);
        }

        return results;
    }
};