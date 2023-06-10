class Solution {
 public:
  // Function to return the adjacency list for each vertex.
  vector<vector<int>> printGraph(int V, vector<int> adj[]) {
    vector<vector<int>> adj_list(V, vector<int>());
    for (int i = 0; i < V; i++) {
      adj_list[i].push_back(i);  // Self-edge
      for (auto adjacent_node : adj[i]) adj_list[i].push_back(adjacent_node);
    }
    return adj_list;
  }
};
