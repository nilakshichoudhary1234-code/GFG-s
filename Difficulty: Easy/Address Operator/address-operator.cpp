void printUsingAddress() {
    int a;
    cin >> a;
    int *addr;
    
    // Store the address of 'a' in 'addr'
    addr = &a;
    
    // Print the value of 'a' using 'addr' without a newline
    cout << *addr;
}