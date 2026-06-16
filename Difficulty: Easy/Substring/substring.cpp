class Solution {
  public:
    string substring(string S, int L, int R) {
        // R - L + 1 gives the total number of characters from index L to R
        return S.substr(L, R - L + 1);
    }
};