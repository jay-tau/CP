class Solution {
public:
  // Function to find the shortest distance of all the vertices
  // from the source vertex S.
  vector<int> dijkstra(int V, vector<vector<int>> adj[], int S) {
    set<pair<int, int>> pq; // {distance, node}
    vector<int> distance(V, INT_MAX);

    distance[S] = 0;
    pq.insert({0, S});

    while (!pq.empty()) {
      pair<int, int> current_pair = *(pq.begin());
      int current_node_dist = current_pair.first,
          current_node = current_pair.second;
      pq.erase(pq.begin());

      for (auto adj_pair : adj[current_node]) {
        int edge_dist = adj_pair[1], adj_node = adj_pair[0];
        int new_dist = current_node_dist + edge_dist;

        if (new_dist < distance[adj_node]) {
          if (distance[adj_node] != INT_MAX)
            pq.erase({distance[adj_node], adj_node});

          distance[adj_node] = new_dist;
          pq.insert({distance[adj_node], adj_node});
        }
      }
    }

    return distance;
  }
};
