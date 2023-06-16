class Solution {
 private:
  bool isValid(int x, int y, int n, int m) {
    return (0 <= x) && (x < n) && (0 <= y) && (y < m);
  }
  vector<pair<int, int>> adj(pair<int, int> current_node, int n, int m) {
    int x = current_node.first, y = current_node.second;
    vector<pair<int, int>> adj_list;

    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};

    for (int i = 0; i < 4; ++i) {
      int new_x = x + dx[i], new_y = y + dy[i];
      if (isValid(new_x, new_y, n, m)) adj_list.push_back({new_x, new_y});
    }

    return adj_list;
  }

 public:
  vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                int newColor) {
    int n = image.size(), m = image[0].size();
    int original_color = image[sr][sc];
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    q.push({sr, sc});

    while (!q.empty()) {
      pair<int, int> current_node = q.front();
      q.pop();
      int current_x = current_node.first, current_y = current_node.second;

      if (visited[current_x][current_y] ||
          image[current_x][current_y] != original_color)
        continue;

      visited[current_x][current_y] = true;
      image[current_x][current_y] = newColor;

      // Push adjacent nodes
      for (pair<int, int> adj_node : adj(current_node, n, m)) q.push(adj_node);
    }

    return image;
  }
};
