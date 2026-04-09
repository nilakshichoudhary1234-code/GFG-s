void arrayTraversal(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        // Print the current element
        cout << arr[i];
        
        // Add a space only if it's not the last element
        // (Optional: standard 'cout << arr[i] << " ";' also usually passes)
        if (i < size - 1) {
            cout << " ";
        }
    }
}