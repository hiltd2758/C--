#include <iostream>
using namespace std;

int chieudai(int n) {
    if (n == 0) {
        return 1;
    }

    int so = 0;

    while (n != 0) {
        n = n / 10;
        so++;
    }

    return so; 
}

int main() {
    int num;
    cout << "Nhap so: ";
    cin >> num;

    int dai = chieudai(num);

    cout << "Chieu dai cua " << num << " la: " << dai << endl;

    return 0;
}

