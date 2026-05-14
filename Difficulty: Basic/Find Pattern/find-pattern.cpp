int findPattern(string &s, string &p) {
    // find() returns the index of the first occurrence of p in s
    size_t found = s.find(p);

    // If p is not found, s.find returns string::npos
    if (found != string::npos) {
        return found;
    } else {
        return -1;
    }
}