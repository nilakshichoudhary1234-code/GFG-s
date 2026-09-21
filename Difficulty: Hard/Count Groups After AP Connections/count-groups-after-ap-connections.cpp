#include <vector>
#include <numeric>

class Solution {
    struct DSU {
        std::vector<int> parent;
        int components;

        DSU(int n) : parent(n + 1), components(n) {
            std::iota(parent.begin(), parent.end(), 0);
        }

        int find(int i) {
            if (parent[i] == i)
                return i;
            return parent[i] = find(parent[i]);
        }

        void unite(int i, int j) {
            int root_i = find(i);
            int root_j = find(j);
            if (root_i != root_j) {
                parent[root_i] = root_j;
                components--;
            }
        }
    };

public:
    int findComponents(int n, std::vector<std::vector<int>>& arr) {
        DSU dsu(n);

        // Difference arrays for each possible value of d (1 to 10)
        // diff[d][x] represents the start/end of AP segments with step size d
        std::vector<std::vector<int>> diff(11, std::vector<int>(n + 2, 0));

        for (const auto& op : arr) {
            int a = op[0];
            int d = op[1];
            int k = op[2];

            if (k > 0) {
                diff[d][a] += 1;
                if (a + k * d <= n) {
                    diff[d][a + k * d] -= 1;
                }
            }
        }

        // Process edges for each step size d
        for (int d = 1; d <= 10; ++d) {
            for (int i = 1; i <= n; ++i) {
                if (i - d >= 1) {
                    diff[d][i] += diff[d][i - d];
                }
                // If diff[d][i] > 0, there is at least one AP connection between i and i + d
                if (diff[d][i] > 0 && i + d <= n) {
                    dsu.unite(i, i + d);
                }
            }
        }

        return dsu.components;
    }
};