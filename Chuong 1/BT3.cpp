#include <iostream>
using namespace std;
int main (){
	double r;
	const double pi = 3.14159;
	
	while (true) {
	  cout << "Nhap ban kinh: ";
	  cin >> r;
	
	if ( r > 0 ) {
	  double chu_vi = 2 * pi * r;
	  double dien_tich = pi * r * r;
	
	  cout << "Chu vi cua hinh tron voi ban kinh bang " << r << " la: " << chu_vi << endl;
	  cout << "Dien tich cua hinh tron voi ban kinh bang " << r << " la: " << dien_tich << endl;
	  
	  break;
	} else {
		
		cout << "Do dai cua ban kinh khong xac dinh! Vui long nhap lai " << endl;
		
	 }
    } 
    
	return 0;
}
