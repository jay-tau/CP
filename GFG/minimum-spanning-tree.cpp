class Solution {
public:
  // Function to find sum of weights of edges of the Minimum Spanning Tree.
  int spanningTree(int V, vector<vector<int>> adj[]) {
    int total_weight = 0;
    vector<bool> visited(V, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   greater<pair<int, int>>>
        min_heap;
    min_heap.push({0, 0}); // {Weight, node}
    while (!min_heap.empty()) {
      // Pop lowest weight edge
      pair<int, int> current_pair = min_heap.top();
      min_heap.pop();
      int current_weight = current_pair.first,
          current_node = current_pair.second;

      if (visited[current_node])
        continue;

      visited[current_node] = true; // Set current node as visited
      total_weight += current_weight;

      for (auto adjacent_edge :
           adj[current_node]) { // Add {weight, adjacent_node} to min_heap
        int adjacent_node = adjacent_edge[0],
            adjacent_weight = adjacent_edge[1];
        if (!visited[adjacent_node])
          min_heap.push({adjacent_weight, adjacent_node}); // {weight, node}
      }
    }
    return total_weight;
  }
};
