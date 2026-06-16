/*You are required to complete below methods */

/*Inserts an entry with key x and value y in map */
void add_value(unordered_map<int, int> &m, int x, int y) {
    // Insert or update the key x with value y
    m[x] = y;
}

/*Returns the value with key x from the map */
int find_value(unordered_map<int, int> &m, int x) {
    // Look for the key x in the map
    auto it = m.find(x);
    
    // If found, return its value, otherwise return -1
    if (it != m.end()) {
        return it->second;
    }
    return -1;
}

/*Returns the size of the map */
int getSize(unordered_map<int, int> &m) {
    // Return the total number of elements in the map
    return m.size();
}

/*Removes the entry with key x from the map */
void removeKey(unordered_map<int, int> &m, int x) {
    // Erase the element matching the key x if it exists
    m.erase(x);
}