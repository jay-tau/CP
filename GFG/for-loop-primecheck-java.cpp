void isPrime(int n) {
  string ans = (n == 1) ? "No" : "Yes";
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;
}