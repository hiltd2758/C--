#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int n;
	cout <<"Nhap mot so: ";
	cin >> n;
	n = abs(n);
	if ( n %2 == 0) 
		cout << n <<" la so chan " << endl;
	else 
		cout << n <<" la so le" << endl;
	return 0;
}
