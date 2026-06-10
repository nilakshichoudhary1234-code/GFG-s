// User function Template for C
/* Function to take input for 2D array elements
* N : size of matrix
*/
void twoDimensional(int N, int A[][N]) {
    
    // Loop through each row
    for (int i = 0; i < N; i++) {
        // Loop through each column in the current row
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        // Print a new line after completing a row
        printf("\n");
    }
    
}