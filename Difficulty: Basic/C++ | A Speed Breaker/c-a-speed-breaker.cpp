#include <iostream>
#include <iomanip> // Required for fixed and setprecision

class Solution {
  public:
    void speedBreaker(double a, int b) {
        // 'fixed' ensures the precision applies to the decimal part
        // 'setprecision(b)' sets the number of decimal places to b
        std::cout << std::fixed << std::setprecision(b) << a << std::endl;
    }
};