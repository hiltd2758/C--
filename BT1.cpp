#include <iostream>

using namespace std;

int main() {

  int n;
  long long gt = 1;

  cout << "Nhap n: ";
  cin >> n;

  if (n % 2 == 0) {
    for (int i = 2; i <= n; i += 2) {
      gt *= i;
    }
  } else {
    for (int i = 1; i <= n; i += 2) {
      gt *= i;
    }
  }

  cout << n << "!! = " << gt << endl;

  return 0;
}

