class Solution {
public:
  // Function to return Breadth First Traversal of given graph.
  vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    vector<int> bfs;

    queue<int> q;
    vector<bool> visited(V, false);

    q.push(0);

    while (!q.empty()) {
      int current_node = q.front();
      q.pop();
      if (visited[current_node])
        continue;

      visited[current_node] = true;
      bfs.push_back(current_node);

      for (auto adj_node : adj[current_node])
        q.push(adj_node);
    }
    return bfs;
  }
};
