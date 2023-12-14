#include<iostream>
using namespace std;
int main (){
	int n;
	cout <<"Nhap gia tri n: ";
	cin >>n;
	
	double s = 0.0;
	
	if ( n< 1){
		cout<<"khong tinh duoc tong khi n<1";
	} else {
		for ( int i =1 ; i<=n ; i++) {
			s += 1.0/ i;
		}
		cout<<"tong: " << s << endl;
	}
	
	return 0;
}
