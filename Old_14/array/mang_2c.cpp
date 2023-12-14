#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

const int SO_HANG_TOI_DA = 10;
const int SO_COT_TOI_DA = 10;

void nhapMang(int A[][SO_COT_TOI_DA], int m, int n) {
    cout << "Nhap so phan tu A[" << m << "][" << n << "]:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
}

void xuatMang(int A[][SO_COT_TOI_DA], int m, int n) {
    cout << "Ma tr?n A[" << m << "][" << n << "]:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
}

int demSoAm(int A[][SO_COT_TOI_DA], int m, int n) {
    int dem = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (A[i][j] < 0) {
                dem++;
            }
        }
    }
    return dem;
}

int timMax(int A[][SO_COT_TOI_DA], int m, int n) {
    int maxVal = INT_MIN;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (A[i][j] > maxVal) {
                maxVal = A[i][j];
            }
        }
    }
    return maxVal;
}

int tongDongLonNhat(int A[][SO_COT_TOI_DA], int m, int n) {
    int tongMax = INT_MIN;
    int viTriHangMax = -1;
    for (int i = 0; i < m; ++i) {
        int tong = 0;
        for (int j = 0; j < n; ++j) {
            tong += A[i][j];
        }
        if (tong > tongMax) {
            tongMax = tong;
            viTriHangMax = i;
        }
    }
    return viTriHangMax;
}

void sapXepTangDanTungHang(int A[][SO_COT_TOI_DA], int m, int n) {
    for (int i = 0; i < m; ++i) {
        sort(A[i], A[i] + n);
    }
}

bool soSanhHang(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; ++i) {
        if (arr1[i] != arr2[i]) {
            return arr1[i] > arr2[i];
        }
    }
    return false;
}

void sapXepGiamDan(int A[][SO_COT_TOI_DA], int m, int n) {
    for (int i = 0; i < m - 1; ++i) {
        for (int j = 0; j < m - i - 1; ++j) {
            if (soSanhHang(A[j], A[j + 1], n)) {
                swap_ranges(A[j], A[j] + n, A[j + 1]);
            }
        }
    }
}

int main() {
    int m, n;
	cout<<"Nhap m:" ;
	cin>> m;
	cout<<"Nhap n:";
	cin >>n;
	int A[][SO_COT_TOI_DA];
	nhapmang( m, n, A[]);
	
