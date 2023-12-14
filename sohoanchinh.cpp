#include <iostream>

using namespace std;

// Hàm chính
int main() {
  
  int n;
  cout << "Nhap so N: ";
  cin >> n;

  
  for (int i = 2; i < n; i++) {
    
    bool hc = true;
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        hc = false;
        break;
      }
    }
    if (hc) {
      cout << i << " ";
    }
  }

  return 0;
}

