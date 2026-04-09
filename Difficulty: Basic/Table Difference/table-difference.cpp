void difference(int n1, int n2) {
    // The difference between (n1 * i) and (n2 * i) 
    // is equivalent to (n1 - n2) * i
    int diff = n1 - n2;
    
    for (int i = 1; i <= 10; i++) {
        cout << diff * i;
        
        // Add a space after each number except the last one
        if (i < 10) {
            cout << " ";
        }
    }
}