// User function Template for C++
class Solution {
public:
  vector<int> shortestPath(int N, int M, vector<vector<int>> &edges) {
    vector<vector<pair<int, int>>> adj(N + 1, vector<pair<int, int>>());

    for (auto edge : edges)
      adj[edge[0]].push_back({edge[1], edge[2]}); // {Node, Distance}

    vector<int> distance(N, -1);
    queue<pair<int, int>> q;
    distance[0] = 0;
    q.push({0, 0}); // {Node, distance}
    while (!q.empty()) {
      pair<int, int> current_pair = q.front();
      q.pop();
      int current_node = current_pair.first,
          current_distance = current_pair.second;
      for (auto adjacent_pair : adj[current_node]) {
        int adjacent_node = adjacent_pair.first,
            distance_delta = adjacent_pair.second;
        int adjacent_distance = current_distance + distance_delta;
        if ((distance[adjacent_node] == -1) ||
            (adjacent_distance < distance[adjacent_node])) {
          distance[adjacent_node] = adjacent_distance;
          q.push({adjacent_node, adjacent_distance});
        }
      }
    }
    return distance;
  }
};
