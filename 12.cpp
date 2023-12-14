#include <iostream>
using namespace std;

int main() {
    char a;
    cout <<"Nhap ky tu: " ;
    cin >> a;
   	if (isalpha(a)) {
        if (isupper(a)) {
            cout << a << " la ky tu chu in." << endl;
        } else {
            cout << a << " la ky tu chu thuong." << endl;
            }
        } else if (isdigit(a)) {
            cout << a << " la ky tu so." << endl;
        } else if (isspace(a)) {
            cout << a << " la ky tu khoang trang." << endl;
        } else {
            cout << a << " la ky tu dac biet." << endl;
        }
    return 0;
}

