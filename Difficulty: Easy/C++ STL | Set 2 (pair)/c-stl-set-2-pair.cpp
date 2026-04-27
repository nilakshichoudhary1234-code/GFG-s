/* Inserts a pair <string, pair<x, y>> into the vector A */
void add_pair(vector<pair<string, pair<int, int>>> &A, string str, int x, int y) {
    // We can use make_pair or curly braces to nest the values
    A.push_back({str, {x, y}});
}

/* Returns the size of the vector A */
int get_size(vector<pair<string, pair<int, int>>> &A) {
    return A.size();
}

/* Prints space separated values of vector A */
void print_values(vector<pair<string, pair<int, int>>> &A) {
    for(const auto &p : A) {
        // p.first is the string, p.second.first is x, p.second.second is y
        cout << p.first << " " << p.second.first << " " << p.second.second << " ";
    }
}

/* Sorts the vector A based on the inner pair (x and y) */
void sort_pair(vector<pair<string, pair<int, int>>> &A) {
    // By default, sorting a pair of (string, pair<int, int>) would sort by string first.
    // The requirement asks to sort with respect to values x and y.
    sort(A.begin(), A.end(), [](const pair<string, pair<int, int>> &a, const pair<string, pair<int, int>> &b) {
        return a.second < b.second;
    });
}