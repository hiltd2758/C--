#include <iostream>
using namespace std;

char hoa(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32; 
    }
    return c; 
}

char thuong(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32; 
    }
    return c; 
}

int main() {
    char kiTu;
    cout << "Nhap ky tu: ";
    cin >> kiTu;

    char kiTuHoa = hoa(kiTu);
    char kiTuThuong = thuong(kiTu);

    cout << "Ky tu hoa: " << kiTuHoa << endl;
    cout << "Ky tu thuong: " << kiTuThuong << endl;

    return 0;
}

