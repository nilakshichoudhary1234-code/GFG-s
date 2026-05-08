#include <iostream>
#include <iomanip> // Required for scientific and setprecision
using namespace std;

int main() {
    double a;
    cin >> a;
    
    // 'scientific' sets the format to scientific notation
    // 'fixed' is not used here because we want the 'e' notation
    // 'setprecision(4)' ensures 4 digits after the decimal point
    cout << scientific << setprecision(4) << a << endl;
    
    return 0;
}