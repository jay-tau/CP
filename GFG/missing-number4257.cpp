

int missingNumber(int A[], int N) {
  int true_sum = 0, expected_sum = ((N * (N + 1)) / 2);

  for (int i = 0; i < (N - 1); ++i)
    true_sum += A[i];

  return (expected_sum - true_sum);
}