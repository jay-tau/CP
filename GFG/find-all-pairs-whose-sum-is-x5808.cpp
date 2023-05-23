class Solution {
public:
  vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X) {
    vector<pair<int, int>> ans;
    set<int> s1, s2;

    for (int i = 0; i < N; ++i)
      s1.insert(A[i]);
    for (int i = 0; i < M; ++i)
      s2.insert(B[i]);

    for (auto a : s1) {
      int b = X - a;
      if (s2.find(b) != s2.end()) // b found in s2
        ans.push_back({a, b});
    }
    return ans;
  }
};
