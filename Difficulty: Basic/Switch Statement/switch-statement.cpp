#include <iostream>
#include <string>
using namespace std;

string findName(int n) {
    // Use switch statement to check values 1-9
    switch(n) {
        case 1:
            return "One";
        case 2:
            return "Two";
        case 3:
            return "Three";
        case 4:
            return "Four";
        case 5:
            return "Five";
        case 6:
            return "Six";
        case 7:
            return "Seven";
        case 8:
            return "Eight";
        case 9:
            return "Nine";
        default:
            return "Unknown";
    }
}

int main() {
    int n;
    if (cin >> n) {
        cout << findName(n) << endl;
    }
    return 0;
}