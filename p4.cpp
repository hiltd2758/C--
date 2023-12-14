#include<iostream>
#include <cmath>
using namespace std;
int main (){
	int n;
	cout<<"Nhap n: " ;
	cin >> n;
	
	float s = 2 - 1.0 / pow ( 2, n ) ;
	
	cout <<"Tong cua day so: " << s << endl;
	
	return 0;
}
