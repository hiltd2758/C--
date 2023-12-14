#include<iostream>
using namespace std;
int main (){
	int N ;
	int tong = 0;
	while (true) {
	cout <<"Nhap so nguyen N ( 4 chu so ): ";
	cin >>N;
	
	if ( N < 1000 || N > 9999 ) {
	   cout <<"So vua nhap khong la so co 4 chu so, hay nhap lai. ";
	   cin.clear();
	   cin.ignore(100, '\n');
	   continue;
	 }else {
	    break;
	 }
	
	}
	int N0 = N ; //luu gia tri N
	
	while ( N > 0 ) {
		tong +=  N % 10; //lay so cuoi, cong vao tong
		N /= 10 ; // bo so cuoi
		}
	
	cout <<"Tong cac chu so cua " << N0 << " la: " << tong << endl;
	
	
	
	return 0;
}
