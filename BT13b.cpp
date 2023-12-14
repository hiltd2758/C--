#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int so_true, doan, lan_doan = 5;
    
    cout << "Nhap mot so bat ky (1-100): ";
    cin >> so_true;
    
    if (so_true < 1 || so_true > 100) {
        cout << "So ban nhap khong hop le!" << endl;
        return 1;
    }

    for (int i = 1; i <= lan_doan; ++i) {
        doan = rand() % 100 + 1; 

        cout << "Lan du doan thu " << i << " cua may: " << doan << endl;

        if (doan == so_true) {
            cout << "Chuc mung! May doan dung so " << so_true << " sau " << i << " lan doan." << endl;
            return 0;
        }
    }

    cout << "May da het luot doan. So ban chon la: " << so_true << endl;

    return 0;
}

