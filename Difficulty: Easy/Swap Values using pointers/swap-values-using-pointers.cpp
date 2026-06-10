// Function to swap a and b using pointers
void swap(int *a, int *b) {
    // Store the value pointed to by 'a' in a temporary variable
    int temp = *a;
    
    // Assign the value pointed to by 'b' to the location pointed to by 'a'
    *a = *b;
    
    // Assign the temporary value to the location pointed to by 'b'
    *b = temp;
}