#include <iostream>
using namespace std;

int main() {
   
    for (int i = 33; i <= 255; ++i) {
        cout << "Ma ASCII: " << i << " - Ky tu: " << static_cast<char>(i) << std::endl;
    }
    return 0;
}

