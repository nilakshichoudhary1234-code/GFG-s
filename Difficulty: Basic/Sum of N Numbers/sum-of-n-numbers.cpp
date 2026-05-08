int nSum(int n) {
    // Using long long is safer if n is large to prevent overflow
    return (n * (n + 1)) / 2;
}