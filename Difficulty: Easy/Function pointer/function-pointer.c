// User function Template for C

int sub(int a, int b) {
    // Return the difference of a and b
    return a - b;
}

int add(int a, int b) {
    // Return the sum of a and b
    return a + b;
}

void compute(int a, int b, int (*ptr)(int, int)) {
    // Call the function via the function pointer and print the result followed by a newline
    printf("%d\n", ptr(a, b));
}