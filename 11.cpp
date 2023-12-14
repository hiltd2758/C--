#include<iostream>
using namespace std;
int main (){
	double mau1, mau2, tu1, tu2;
	
	cout <<"Tu so cua phan so thu nhat: ";
	cin >> tu1;
	
	do 
		{
			cout <<"Mau so cua phan so thu nhat: " ;
			cin >> mau1;
			if ( mau1 == 0) 
				cout<<"Mau so phai khac khong!Nhap lai. " << endl; ;
		} while ( mau1 == 0) ;
		
	cout <<"Tu so cua phan so thu hai: " ;
	cin >> tu2; 
	
	do 
		{
			cout <<"Mau so cua phan so thu hai: " ;
			cin >> mau2;
			if(mau2==0)
				cout<<"Mau so phai khac khong!Nhap lai." << endl;
		} while ( mau2 == 0) ;
		
	double tong = (tu1 * mau2 + tu2 * mau1) / (mau1 * mau2);
    double hieu = (tu1 * mau2 - tu2 * mau1) / (mau1 * mau2);
    double tich = (tu1 * tu2) / (mau1 * mau2);
    double thuong = (tu1 * mau2) / (mau1 * tu2);

	
	cout << "Tong hai phan so la: " << tong  << endl;
    cout << "Hieu hai phan so la: " << hieu  << endl;
    cout << "Tich hai phan so la: " << tich  << endl;
    cout << "Thuong hai phan so la: " << thuong << endl;
	
	return 0;
}
