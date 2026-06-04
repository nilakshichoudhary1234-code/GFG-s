/*Complete the function below*/
void multiply(int A[][100], int B[][100], int C[][100], int N)
{
    // Loop through each row of matrix A
    for (int i = 0; i < N; i++) {
        // Loop through each column of matrix B
        for (int j = 0; j < N; j++) {
            // Initialize the current cell to 0
            C[i][j] = 0;
            
            // Perform the dot product of row i and column j
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}