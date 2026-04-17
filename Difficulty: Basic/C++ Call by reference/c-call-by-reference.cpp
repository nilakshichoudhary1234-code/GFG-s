void reverse_dig(int &a, int &b) {
    auto reverse = [](int &num) {
        int rev = 0;
        while (num > 0) {
            rev = rev * 10 + (num % 10);
            num /= 10;
        }
        num = rev;
    };
    
    reverse(a);
    reverse(b);
    // Add your code here.
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    // Add your code here.
}