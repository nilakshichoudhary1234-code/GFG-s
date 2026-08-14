class Solution {
  public:
    int binaryToDecimal(string& b) {
        int decimalValue = 0;

        // Iterate through each character in the binary string
        for (char bit : b) {
            // Multiply the current decimal value by 2 (shift left) 
            // and add the integer value of the current bit (0 or 1)
            decimalValue = decimalValue * 2 + (bit - '0');
        }

        return decimalValue;
    }
};