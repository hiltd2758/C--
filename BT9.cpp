#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << setw(10) << "Goc (do)" << setw(10) << "| Sin" << setw(10) << "| Cos" << setw(10) << "| Tan" << endl;
    cout << "--------------------------------------------------------" << endl;

    for (int i = 0; i <= 180; i += 5) {
        double doRad = i;
        double rad = doRad * M_PI / 180.0;

        double gt_sin = sin(rad);
        double gt_cos = cos(rad);
        double gt_tan = tan(rad);

        cout << setw(10) << doRad << " |";
        cout << setw(10) << gt_sin << " |";
        cout << setw(10) << gt_cos << " |";

    
        if (rad == M_PI / 2 || rad == 3 * M_PI / 2) {
            cout << setw(10) << "Khong hop le" << endl;
        } else {
            cout << setw(10) << gt_tan << endl;
        }
    }

    return 0;
}

