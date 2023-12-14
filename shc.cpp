#include <iostream>

using namespace std;
int  main(){
	int n;
	cout <<"N: ";
	cin >> n;
	
	int tonguoc = 0;
 	for ( int i =1 ; i < n ; ++i) {
 		if ( n%i ==0 )
 			tonguoc += i;
	 }	
	if (tonguoc == n) {
		cout << n << " la so hoan hao " ;
		
	} else {
		cout << n << " la so khong hoan hao" ;
	}
  return 0;
}

