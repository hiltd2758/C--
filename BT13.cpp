#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 

    int so_true = rand() % 100 + 1; 
    int doan, lan_doan = 5; 

    cout << "Moi ban doan so (1-100): ";
    
    for (int lan = 1; lan <= lan_doan; ++lan) {
        cin >> doan;

        if (doan == so_true) {
            cout << "Chuc mung! Ban doan dung so " << so_true << " sau " << lan << " lan doan." << endl;
            return 0;
        } else if (doan < so_true) {
            cout << "So ban doan nho hon dap an. Hay doan lai: ";
        } else {
            cout << "So ban doan lon hon dap an. Hay doan lai: ";
        }
    }
    cout << "Ban da het luot doan. So bi mat la: " << so_true << endl;

    return 0;
}

