#include <iostream>
using namespace std;
const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void nhapMang(int A[][MAX_COLS], int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
}

int tongbien( int A[][MAX_COLS], int n, int m)
	{
		int sum=0;
		for ( int j = 0 ; j < m ; ++j)
			sum += A[0][j];
	}

void xuatMang(int A[][MAX_COLS], int n, int m) {
    cout << "Mang " << n << " hang" << m << " cot" << ":" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << A[0][j] << " ";
        for (int j = 0; j < m; ++j) {
            cout << A[n-1][j] << " ";
        for (int i = 1; i < n-1; ++i) {
            cout << A[n-1][j] << " ";
        for (int i = 1; i< n-1; ++i) {
            cout << A[i][m-1] << " ";
        }
        cout << endl;
    }
}
int tongdong(int A[][MAX_COLS], int n, int m, int dong)
{
	int sum =0;
	for ( int j = 0; j < m; ++j) {
	
	sum +=A[dong][j];}
	return sum;
}

int tongcot(int A[MAX_COLS][100], int n, int m, int cot)
{
	int sum=0;
	for ( int i =0; i < n; ++i)
		{
			sum +=A[i][cot] ;
			return sum;
		}
}
int main() {
    int m, n;
    cout << "Nhap so cot m: ";
    cin >> m;
    cout << "Nhap so hang n: ";
    cin >> n;
	int cot;
	cout<<"Nhap cot tinh tong:";
	cin >>cot;
    if (m > MAX_ROWS || m > MAX_COLS || m <= 0 || n <= 0) {
        cout << "Kich thuoc mang khong hop le. Vui long nhap lai." << endl;
        return 1;
    }

    int A[MAX_ROWS][MAX_COLS];

    nhapMang(A, m, n);
    
    xuatMang(A, m, n);

    tongcot(A, m, n ,cot);

    return 0;
}

