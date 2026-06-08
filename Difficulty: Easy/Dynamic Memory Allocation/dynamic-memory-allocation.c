// User function Template for C
int * getArray (int n) {
    // 1. Allocate memory dynamically for 'n' integers
    int * ptr = (int *)malloc(n * sizeof(int));
    
    // 2. Loop through the array and set every element to 1
    for (int i = 0; i < n; i++) {
        ptr[i] = 1;
    }
    
    // 3. Return the pointer to the dynamically allocated array
    return ptr;
}