#include<iostream>
#include<cmath>
using namespace std;

float tinh_tong(float x, int n) 
{
	float s = 0;
	for ( int i = 1; i <=n ; ++i)
		s = s + pow(x, i) ;
	return s;

} 

float tinh_tong1(float x, int n) 
{
	float s = 0;
	for ( int i = 0; i <=n ; ++i )             
		s = s + pow(x, 2*i +1) ;
	return s;

}


bool nguyento(int n) 
{
	if (n <=1) {
		return false;
	}
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}


int min4(int a, int b, int c, int d) {
  int min;

  if (a <= b) {
    min = a;
  } else {
    min = b;
  }

  if (c <= min) {
    min = c;
  }

  if (d <= min) {
    min = d;
  }

  return min;
}


int main () {
	int n;
	cout << "Nhap n : " ;
	cin >> n ;
	float x ;
	cout << "Nhap x: " ;
	cin >> x ;
	float t = tinh_tong(x, n);
	cout << t << endl;
	
	float t1= tinh_tong1(x, n) ;
	cout << t1 << endl;
	
	if (nguyento(n)) {
		cout << n << " la so nguyen to" << endl;
	} else {
		cout << n << " khong phai la so nguyen to" << endl;
	}

	int a,b,c,d;

	cout << "Nhap a b c d: ";
	cin >> a >> b >> c >> d;

	int so_nho = min4(a,b,c,d);
	cout <<"So nho nhat la: " << so_nho << endl;

	return 0 ;
}
