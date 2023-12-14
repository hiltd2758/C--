#include<iostream>
using namespace std;
int main (){
	int a,b,c;
	cout <<"Nhap lan luot 3 so nguyen: ";
	cin >> a >> b >> c;
	
	int tong = a + b + c;
	int tich = a * b * c;
	
    cout << "Tong cua " << a << ", " << b << " va " << c << " la: " << tong << endl;
    cout << "Tich cua " << a << ", " << b << " va " << c << " la: " << tich << endl;

	return 0;
}
