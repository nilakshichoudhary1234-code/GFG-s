void precise(float a, float b) {
    // Calculate the division result
    float result = a / b;
    
    // 1. Output the default result
    // 2. Output the result formatted to 3 decimal places
    cout << result << " " << fixed << setprecision(3) << result << endl;
}