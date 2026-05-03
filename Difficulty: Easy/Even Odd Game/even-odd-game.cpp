#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    if (n % 2 != 0) {
        // n is odd
        cout << "You";
    } else {
        // n is even
        cout << "Friend";
    }

    return 0;
}