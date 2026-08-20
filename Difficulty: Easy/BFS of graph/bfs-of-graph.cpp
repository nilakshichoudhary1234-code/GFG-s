class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        int V = adj.size();
        vector<int> ans;
        vector<bool> visited(V, false);
        queue<int> q;

        // Start BFS from vertex 0
        q.push(0);
        visited[0] = true;

        while(!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);

            // Traverse all adjacent nodes of the popped node
            for(int neighbor : adj[node]) {
                if(!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        return ans;
    }
};