// User function Template for C++

class Solution {
 private:
  bool isValid(int x, int y, int n, int m) {
    return (((0 <= x) && (x < n)) && ((0 <= y) && (y < m)));
  }
  vector<pair<int, int>> adj(pair<int, int> current_node, int n, int m) {
    vector<pair<int, int>> adj_list;
    int x = current_node.first, y = current_node.second;

    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};
    for (int i = 0; i < 4; ++i) {
      int new_x = x + dx[i], new_y = y + dy[i];
      if (isValid(new_x, new_y, n, m)) adj_list.push_back({new_x, new_y});
    }
    return adj_list;
  }
  void dfs(pair<int, int> current_node, vector<vector<bool>> &visited,
           vector<vector<char>> &mat, int n, int m) {
    int x = current_node.first, y = current_node.second;
    if (visited[x][y]) return;
    if (mat[x][y] == 'X') {  // X but not visited
      visited[x][y] = true;
      return;
    }

    visited[x][y] = true;  // O but not visited

    for (auto adj_node : adj(current_node, n, m)) {
      int adj_x = adj_node.first, adj_y = adj_node.second;
      if (!visited[adj_x][adj_y]) dfs(adj_node, visited, mat, n, m);
    }
  }

 public:
  vector<vector<char>> fill(int n, int m, vector<vector<char>> mat) {
    set<pair<int, int>> sources;
    for (int i = 0; i < n; ++i) {  // {i, 0/m-1}
      if (mat[i][0] == 'O') sources.insert({i, 0});
      if (mat[i][m - 1] == 'O') sources.insert({i, m - 1});
    }
    for (int j = 0; j < m; ++j) {  // {0/n-1, j}
      if (mat[0][j] == 'O') sources.insert({0, j});
      if (mat[n - 1][j] == 'O') sources.insert({n - 1, j});
    }

    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (auto source : sources) {
      dfs(source, visited, mat, n, m);
    }

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (visited[i][j])
          continue;
        else
          mat[i][j] = 'X';
      }
    }

    return mat;
  }
};
