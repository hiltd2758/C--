#include<iostream>
#include<cmath>
#include<cmath>
using namespace std;
bool cp (int n)  {
	if ( n<= 0)
	return 1;

	int sqrtN= sqrt(n);
	return ( sqrtN * sqrtN == n);
}

int main (){
    int num;
    do {
    	cout << "Nhap n > 0: ";
    	cin >> num;
    	
    	if ( num<0 )
		  cout <<"Nhap lai, n phai la so duong" << endl;
	} while (num<0) ;
	
	if (cp(num)) {
		cout << num << " la so chinh phuong" << endl;
		
	} else {
		cout << num << " khong la so chinh phuong" << endl;
	} ;
	
	return 0;
}
