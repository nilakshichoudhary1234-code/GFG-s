class Solution {
  public:
    string compareNum(int A, int B) {
        // Check if A is greater than B
        if (A > B) {
            return to_string(A) + " is greater than " + to_string(B);
        } 
        // Check if A is less than B
        else if (A < B) {
            return to_string(A) + " is less than " + to_string(B);
        } 
        // If neither, they must be equal
        else {
            return to_string(A) + " is equals to " + to_string(B);
        }
    }
};