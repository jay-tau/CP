// User function Template for C++

void isPrime(int n) {
  bool is_prime = (n == 1) ? false : true;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }
  cout << (is_prime ? "Yes" : "No");
  cout << endl;
}
