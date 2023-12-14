#include<iostream>
using namespace std;

int main() {
    int tien;
    do {
        cout << "Nhap so tien can doi: ";
        cin >> tien;
        if (tien < 0) {
            cout << "So tien can doi khong hop le! Nhap lai" << endl;
        }
    } while (tien < 0);

    int loai[9] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int to;
    for (int i = 0; i < 9; ++i) {
        to = tien / loai[i];
        if (to > 0) {
            cout << "So to " << loai[i] << "k: " << to << endl;
            tien -= to * loai[i];
        }
        if (tien == 0) {
            break;
        }
    }

    return 0;
}

