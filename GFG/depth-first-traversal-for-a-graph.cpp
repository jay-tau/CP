class Solution {
public:
  void dfsHelper(int starting_node, vector<int> adj[], vector<int> &visited,
                 queue<int> q, vector<int> &dfs) {
    q.push(starting_node);

    while (!q.empty()) {
      int current_node = q.front();
      q.pop();

      if (visited[current_node])
        continue;

      visited[current_node] = true;
      dfs.push_back(current_node);

      for (auto adj_node : adj[current_node]) {
        if (!visited[adj_node])
          dfsHelper(adj_node, adj, visited, q, dfs);
      }
    }
  }

  // Function to return a list containing the DFS traversal of the graph.
  vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    vector<int> visited(V, false);
    queue<int> q;
    vector<int> dfs;

    dfsHelper(0, adj, visited, q, dfs);

    return dfs;
  }
};