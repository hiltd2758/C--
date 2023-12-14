#include <iostream>
using namespace std;

int main() {
    char p1, p2;

    cout << "Nguoi choi 1 (keo/k, bua/b, bao/o): ";
    cin >> p1;

    cout << "Nguoi choi 2 (keo/k, bua/b, bao/o): ";
    cin >> p2;

    p1 = tolower(p1);
    p2 = tolower(p2);

   
    if ((p1 == 'k' && p2 == 'o') || (p1 == 'b' && p2 == 'k') || (p1 == 'o' && p2 == 'b')) {
        cout << "Nguoi choi 1 thang!\n";
    } else if ((p2 == 'k' && p1 == 'o') || (p2 == 'b' && p1 == 'k') || (p2 == 'o' && p1 == 'b')) {
        cout << "Nguoi choi 2 thang!\n";
    } else {
        cout << "Hoa!"<< endl;
    }

    return 0;
}

