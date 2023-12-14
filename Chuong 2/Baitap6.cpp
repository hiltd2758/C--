#include<iostream>
using namespace std;
int main ( ){
    cout << "Cac so co 4 chu so thoa man dieu kien la: \n";
    for (int i = 1000; i <= 9999; ++i) {
        int hangNghin = i / 1000;
        int hangTram = (i % 1000) / 100;
        int hangChuc = (i % 100) / 10;
        int hangDonVi = i % 10;

        int tongHangNghinVaTram = hangNghin + hangTram;
        int tongHangChucVaDonVi = hangChuc + hangDonVi;

        if ((tongHangNghinVaTram % 2 != 0) && (tongHangChucVaDonVi % 2 == 0)) {
            std::cout << i << "\n";
        }
    }

    return 0;

}

