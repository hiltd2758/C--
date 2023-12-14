#include<iostream>
using namespace std;

int main() {
    int n;
   	do {
   		cout << "Nhap n: ";
   		cin >> n;
   		if (n < 0) 
   			cout << "Gia tri n phai la so nguyen duong, hay nhap lai!" << endl;
   	} while (n < 0); 

    bool flag = true;
    
    if (n < 2)
        flag = false;
    else {
        if (n != 2 && n % 2 == 0) 
            flag = false;
        else {
            for (int i = 2; i * i <= n; ++i) {
                if (n % i == 0) {
                    flag = false;
                    break;
                }
            }
        }
    }

    if (flag)
        cout << n << " la so nguyen to!";
    else
        cout << n << " khong la so nguyen to!";

    return 0;
}

