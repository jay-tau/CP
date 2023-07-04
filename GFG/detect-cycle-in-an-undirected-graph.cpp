class Solution {
 private:
  bool bfs(int source, vector<int> adj[], vector<bool> &visited) {
    queue<pair<int, int>> q;  // {current_node, parent}
    visited[source] = true;
    q.push({source, -1});

    while (!q.empty()) {
      pair<int, int> p = q.front();
      q.pop();
      int current_node = p.first, parent_node = p.second;

      visited[current_node] = true;

      // Check and push adjacent nodes
      for (int adj_node : adj[current_node]) {
        if (!visited[adj_node]) {
          visited[adj_node] = true;
          q.push({adj_node, current_node});
        } else if (adj_node != parent_node) {  // New node which is visited
          return true;                         // Cycle is present
        }
      }
    }

    return false;
  }

 public:
  // Function to detect cycle in an undirected graph.
  bool isCycle(int V, vector<int> adj[]) {
    vector<bool> visited(V, false);
    int has_cycle = false;
    for (int i = 0; i < V; ++i) {
      if (!visited[i]) has_cycle = has_cycle || bfs(i, adj, visited);
    }
    return has_cycle;
  }
};
