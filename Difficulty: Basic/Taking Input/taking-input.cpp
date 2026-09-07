#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n;
    float f;
    int ff; // To Store floor of float variable f

    // code here
    // Read the string (including spaces)
    getline(cin, s);

    // Read the integer
    cin >> n;

    // Read the float
    cin >> f;

    // Calculate floor of f and store in ff
    ff = floor(f);
    

    cout << s << endl;
    cout << n << endl;
    cout << ff << endl;
    return 0;
}