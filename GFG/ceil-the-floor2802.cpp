

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
  int flr = INT_MIN, cl = INT_MAX;

  for (int i = 0; i < n; ++i) {
    if (arr[i] <= x) flr = max(flr, arr[i]);
    if (arr[i] >= x) cl = min(cl, arr[i]);
  }

  return {((flr == INT_MIN) ? -1 : flr), ((cl == INT_MAX) ? -1 : cl)};
}
