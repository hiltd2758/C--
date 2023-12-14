#include <iostream>
using namespace std;

int main() {
    int k;
    
    do {
        cout << "Nhap k: ";
        cin >> k;
        
        if (k % 2 != 0) {
            k = k + 1;
        } else if (k < 0) {
            cout << "k nhap vao khong the la so am. Hay nhap lai.\n";
        }
    } while (k < 0);

    int s = 0;

    for (int i = 2; i <= k; i+= 2) {
        s += i;
    }

    cout <<"Tong tu 1 den"<<k << " la: " << s << endl;
    return 0;
}

