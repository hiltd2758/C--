#include<iostream>
#include<cmath>
using namespace std;
void input_arr(int a[100], int n) {
	for (int i = 0; i < n; ++i) 
		{
			cout <<"a[" << i << "] = " ;
			cin >> a[i] ;
		}
}

void output_arr( int a[100], int n)
	{
		for (int i=0; i <n; ++i)
			cout<< a[i] << endl;
	}

int max_arr(int a[100], int n)
	{
		int max = a[0];
		int pos_max = 0;
		for ( int i = 0 ; i < n ; ++i)
			if ( a[i] > max) 
			{
				max = a[i];
				pos_max = i;
			}
			return pos_max;		
	}

void sapxep(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void xoaphantu( int a[], int &n, int vitri)
{
	if (vitri <0 || vitri>=n) 
	{
		cout<<"Khong hop le!" << endl;
		return;
	}
	for ( int i = vitri; i< n-1; ++i)        // for ( int i = pos +1 ; i < n-1 ; ++i )
	                                         //         a[i-1]=a[i]
		{
			a[i]= a[i+1];
		}
		n = n-1;
		cout <<"Da xoa so tai vi tri" << vitri << endl;
}

bool ngto(int so) {
    if (so <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(so); ++i) {
        if (so % i == 0) {
            return false;
        }
    }
    return true;
}

void xoa_ngto(int a[], int &n) {
    int dem = 0; 

    for (int i = 0; i < n; ++i) {
        if (ngto(a[i])) {
            dem++;
        } else {
            a[i - dem] = a[i];
        }
    }
    n -= dem;
}



int main () 
{
	int n ;
	cout <<"n = " ;
	cin >> n;
	int a[100];
	input_arr(a,n);
	cout <<"Mang vua nhap la: " << endl;
	output_arr(a,n);
	
	sapxep(a, n);
	cout<<"Mang sau khi tang dan la: " << endl;
	for ( int i = 0 ; i <n ; ++i)
		{
			cout << a[i] << " ";
			
		}
		cout << endl;
		
	
	
	xoa_ngto(a, n);

    cout << "Mang sau khi xoa so nguyen to: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

  
	return 0;
}

/*
void sapxep ( int a[], int n)
{
	for (int i = 0; i < n-1; ++i)
	for ( int j = 0; j < n; ++j)
	if (a[i] > a[j])
		hoanvi(a[i], a[j]);


//tim kiem tuyen tinh & tim kim nhi phan 
//giam chi phi; Linh canh */
