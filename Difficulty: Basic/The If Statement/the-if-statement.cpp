#include <iostream>
using namespace std;

int main() {
    int n;
    // Read the input number
    cin >> n;

    // Check if the number is greater than 100
    if (n > 100) {
        cout << "Big" << endl;
    }

    // This part runs regardless of the condition above
    cout << "Number" << endl;
    

    return 0;
}