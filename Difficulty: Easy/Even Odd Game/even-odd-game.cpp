string utility(int n) {
    // If n is odd, you pick the last apple
    if (n % 2 != 0) {
        return "You";
    } 
    // If n is even, your friend picks the last apple
    else {
        return "Friend";
    }
}
