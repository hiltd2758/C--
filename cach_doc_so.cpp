#include <iostream>
#include <cmath>
using namespace std;

void docSo(int n) {
    string so1Den9[] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    string Chuc[] = {"", "muoi", "hai muoi", "ba muoi", "bon muoi", "nam muoi", "sau muoi", "bay muoi", "tam muoi", "chin muoi"};
    string Tram[] = {"", "mot tram", "hai tram", "ba tram", "bon tram", "nam tram", "sau tram", "bay tram", "tam tram", "chin tram"};

    bool isNegative = false;
    if (n < 0) {
        isNegative = true;
        n = abs(n);
    }

    int hangTram = n / 100;
    int hangChuc = (n / 10) % 10;
    int hangDonVi = n % 10;

    if (isNegative) {
        cout << "âm ";
    }

    cout << Tram[hangTram];

    if (hangChuc != 0) {
        if (hangChuc == 1) {
            cout << " " << Chuc[hangChuc];
        } else {
            cout << " " << Chuc[hangChuc] << " " << so1Den9[hangDonVi];
        }
    } else {
        cout << " l? " << so1Den9[hangDonVi];
    }

    cout << endl;
}

int main() {
    int n;

    do {
        cout << "Nhap vao mot so nguyen co 3 chu so: ";
        cin >> n;
    } while (n < 100 || n > 999);

    cout << "Cach doc so " << n << " la: ";
    docSo(n);

    return 0;
}

