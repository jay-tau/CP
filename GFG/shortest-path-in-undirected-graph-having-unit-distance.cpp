// User function Template for C++
class Solution {
 public:
  vector<int> shortestPath(vector<vector<int>> &edges, int N, int M, int src) {
    vector<vector<int>> adj(N + 1, vector<int>());

    for (auto edge : edges) {
      adj[edge[0]].push_back(edge[1]);
      adj[edge[1]].push_back(edge[0]);
    }

    vector<int> distance(N, -1);
    queue<pair<int, int>> q;
    distance[src] = 0;
    q.push({src, 0});  // {Node, distance}
    while (!q.empty()) {
      pair<int, int> current_pair = q.front();
      q.pop();
      int current_node = current_pair.first,
          current_distance = current_pair.second;
      for (auto adjacent_node : adj[current_node]) {
        if ((distance[adjacent_node] == -1) ||
            ((current_distance + 1) < distance[adjacent_node])) {
          distance[adjacent_node] = (current_distance + 1);
          q.push({adjacent_node, (current_distance + 1)});
        }
      }
    }
    return distance;
  }
};
