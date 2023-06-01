class Solution {
public:
  string compareNM(int n, int m) {
    string s;
    if (n < m)
      s = "lesser";
    else if (n > m)
      s = "greater";
    else
      s = "equal";
    return s;
  }
};
