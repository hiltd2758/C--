
#include <iostream> 
#include<cmath>
using namespace std;
int main (){
	int n ;
	do {
		cout <<"Nhap n: ";
		cin>> n;
		
		if ( n< 0 ) 
		cout <<"Loi! Nhap lai" ;
	} while ( n < 0 ) ;
	
	double S= 0;
	for ( int i = 1 ; i < n + 1; ++i) 
	   {
	   	S = sqrt(i+3);
	   }
	cout << "Tong cua day so S la: " << S << endl;
	return 0;
}
*/
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int n;

  cout << "Nhap n: ";
  cin >> n;

  // Tinh S = sqrt(3+sqrt(3+sqrt(3+...+sqrt(3)))
  double S = 3;
  for (int i = 1; i <= n; i++) {
    S = sqrt(S + 3);
  }

  // Xuat ket qua
  cout << "S = sqrt(3+sqrt(3+sqrt(3+...+sqrt(3))) = " << S << endl;

  return 0;
}

