#include<iostream>
using namespace std;
int main (){
	int n, p=1, s=0;
	cout <<"nhap n: ";
	cin >> n;
	
	for ( int i = 1; i <= n ; ++i) {  // i<=n chua toi uu vi: thuc hien 2 thao tac // i<n+1 // int t ; i < t;
		p = p*i;
		s = s+p;
		
		
	}
  
	cout <<"tong: " << s << endl;
	
	return 0;
}
