#include<iostream>
using namespace std;
int main (){
	int n;
	do {
		cout <<"nhap n: " ;
		cin >> n;
		
		if (n<0) 
		cout<<"N nhap vao khong la so am: ";
	} while (n<0) ;
	
	int p = 1;
	for ( int i = 1; i < n+1 ; ++i)
	  {
	  	p *= i;
	  }
	cout <<"P=1*2*3*.. "<<n << " = " << p << endl;
	return 0;
}
