#include <iostream>
using namespace std;
int nguyento(int n) {
    if (n <= 1) {
        return 0; 
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    int num;
    cout << "Nhap so: ";
    cin >> num;

    int ketqua = nguyento(num);

    if (ketqua == 1) {
        cout << num << " la so nguyen to." << endl;
    } else {
        cout << num << " khong la so nguyen to." << endl;
    }

    return 0;
}





/* #include <iostream>
using namespace std;
bool nguyento(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false; 
        }
    }

    return true; 
}

int main() {
    int num;
    cout << "Nhap so nguyen: ";
    cin >> num;

    if (nguyento(num)) {
        cout << num << " la so nguyen to." << endl;
    } else {
        cout << num << " khong la so nguyen to." <<endl;
    }

    return 0;
}
*/
