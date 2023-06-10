// User function Template for C++

class Solution {
 public:
  int numProvinces(vector<vector<int>> adj, int V) {
    int count = 0;
    // Convert adj matrix into adj list
    vector<vector<int>> adj_list(V, vector<int>());
    for (int i = 0; i < V; ++i) {
      for (int j = 0; j < V; ++j) {
        if (adj[i][j] == 1) adj_list[i].push_back(j);
      }
    }

    vector<bool> visited(V, false);
    queue<int> q;

    for (int i = 0; i < V; ++i) {
      if (visited[i]) continue;

      count++;
      q.push(i);

      while (!q.empty()) {
        int current_node = q.front();
        q.pop();

        if (visited[current_node]) continue;

        for (auto adj_node : adj_list[current_node]) q.push(adj_node);

        visited[current_node] = true;
      }
    }

    return count;
  }
};
