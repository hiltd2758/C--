#include <iostream>
#include <sstream>
#include <bitset>
using namespace std;

string ThapPhan_NhiPhan(int n) {
    return bitset<32>(n).to_string();
}

string ThapPhan_ThapLucPhan(int n) {
    stringstream ss;
    ss << hex << n; 
    return ss.str();
}

int main() {
    int soThapPhan;
    int heSoDauRa;
    cout << "Nhap so thap phan can chuyen doi: ";
    cin >> soThapPhan;
    cout << "Nhap he so dau ra (2 hoac 16): ";
    cin >> heSoDauRa;

    if (heSoDauRa == 2) {
        string nhiPhan = ThapPhan_NhiPhan(soThapPhan);
        cout << "So nhi phan tuong ung la: " << nhiPhan << endl;
    } else if (heSoDauRa == 16) {
        string thapLucPhan = ThapPhan_ThapLucPhan(soThapPhan);
        cout << "So thap luc phan tuong ung la: " << thapLucPhan << endl;
    } else {
        cout << "He so dau ra khong hop le. Chi chap nhan 2 hoac 16." << endl;
    }

    return 0;
}

