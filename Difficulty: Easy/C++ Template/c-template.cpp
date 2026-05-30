template <class T>
class minElement {
private:
    T y; // Private variable to store the first value

public:
    // Constructor to initialize the private variable
    minElement(T val) {
        y = val;
    }

    // Method to check and print the minimum of x and y
    void check(T x) {
        if (x < y) {
            std::cout << x << std::endl;
        } else {
            std::cout << y << std::endl;
        }
    }
};