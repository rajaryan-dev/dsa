#include <iostream>
#include <vector>
using namespace std;

void printNums(int num) {
  if (num == 0) {
    cout << endl;
    return;
  }

  cout << num << " ";
  printNums(num - 1);
};

int factorial(int n) {
  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

int calSum(int n) {
  if (n == 0) return 0;

  return n + calSum(n - 1);
}

// Calc fibonacci____0 1 1 2 3 5 8 13 -----
int fib(int n) {
  if (n == 0 || n == 1) {
    return n;
  }

  return fib(n - 2) + fib(n - 1);
}

// Check if array is sorted
bool isSorted(vector<int> arr, int n) {
  if (n == 0 || n == 1) {
    return true;
  }

  return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
}

int main() {
  vector<int> arr = {1, 2, 7, 4, 5};

  cout << isSorted(arr, arr.size()) << endl;

  return 0;
}