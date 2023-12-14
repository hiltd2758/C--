#include <iostream>
using namespace std;

int main() {
  int count = 0;
  for (int i = 1; i <= 100; ++i) {
  	
    if (i % 3 == 0 || i % 7 == 0) {
    	cout << i << " " ;  
    	count+= 1;
    	cout << endl;
    }
  }

  cout << "So luong: " << count << endl;
  
 

  return 0;
}

