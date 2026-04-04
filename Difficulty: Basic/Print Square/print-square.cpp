void square(int s) {
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            // Print '*' if it's the first/last row OR first/last column
            if (i == 0 || i == s - 1 || j == 0 || j == s - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
            
            // Add a space after every character as per the note
            // except for potentially the very last space if strict formatting is needed,
            // but usually, a trailing space per star/space works here.
            if (j < s - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}