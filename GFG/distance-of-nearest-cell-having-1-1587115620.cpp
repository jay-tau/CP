class Solution {
 private:
  bool isValid(int x, int y, int n, int m) {
    return (0 <= x) && (x < n) && (0 <= y) && (y < m);
  }
  vector<pair<int, int>> adj(pair<int, int> current_node, int n, int m) {
    vector<pair<int, int>> adj_list;
    int x = current_node.first, y = current_node.second;

    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};
    for (int i = 0; i < 4; ++i) {
      int new_x = x + dx[i], new_y = y + dy[i];
      if (isValid(new_x, new_y, n, m)) adj_list.push_back({new_x, new_y});
    }

    return adj_list;
  }

 public:
  // Function to find distance of nearest 1 in the grid for each cell.
  vector<vector<int>> nearest(vector<vector<int>> grid) {
    int n = grid.size(), m = grid[0].size();
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    queue<pair<pair<int, int>, int>> q;  // {{x, y}, dist}

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (grid[i][j] == 1) {
          dist[i][j] = 0;
          q.push({{i, j}, 0});
        }
      }
    }

    while (!q.empty()) {
      pair<pair<int, int>, int> p = q.front();
      q.pop();
      pair<int, int> current_node = p.first;
      int x = current_node.first, y = current_node.second, d = p.second;

      for (pair<int, int> adj_node : adj(current_node, n, m)) {
        int adj_x = adj_node.first, adj_y = adj_node.second, adj_d = d + 1;
        if (adj_d < dist[adj_x][adj_y]) {
          dist[adj_x][adj_y] = adj_d;
          q.push({adj_node, adj_d});
        }
      }
    }
    return dist;
  }
};
