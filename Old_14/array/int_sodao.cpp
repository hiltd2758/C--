#include <iostream>
using namespace std;
int sodao(int so) {
    int dao = 0;
    while (so != 0) {
        dao = dao * 10 + so % 10;
        so = so / 10;
    }
    return dao;
}

int main() {
    int so;
    cout << "Nhap so nguyen: ";
    cin >> so;
    int dao = sodao(so);
    cout << "So dao cua " << so << " la: " << dao << endl;
    return 0;
}

