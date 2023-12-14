#include<iostream>
#include<cmath>
using namespace std;
int Tong(int n) {

	if ( n<0) 
		return 0;
	else
		return n + Tong(n-1) ;
} 

int tong_bphuong( int n ) {
	
	if ( n<=0) 
		{
			return 0;
		}
	else 
		{
			return n*n + tong_bphuong(n-1);
		}
	
}

float tong_pso( int n )
	{
		if ( n ==1 ) 
			return 1.0;
		else 
			{
				return 1.0/n +tong_pso(n-1);
			}
	} 
	 
double tong_lthua(int x, int n)
{
	if (n == 1) 
	{
		return x;
	}
	else 
	{
		return pow(x, n) + tong_lthua(x, n - 1);
	}
} 

int dem_so_chu_so(int n) {
    if (n < 10) {
        return 1;
    } else {
        return 1 + dem_so_chu_so(n / 10);
    }
}



int tong_so(int n) {
    if (n < 10) {
        return n;
    } else {
        return n % 10 + tong_so(n / 10);
    }
}

int dem_so_le(int n) {
    if (n == 0) {
        return 0;
    } else {
        if ((n % 10) % 2 == 1) {
            return 1 + dem_so_le(n / 10);
        } else {
            return dem_so_le(n / 10);
        }
    }
}

int tong_so_chan(int n) {
    if (n == 0) {
        return 0;
    } else {
        int chu_so_cuoi = n % 10;
        if (chu_so_cuoi % 2 == 0) {
            return chu_so_cuoi + tong_so_chan(n / 10);
        } else {
            return tong_so_chan(n / 10);
        }
    }
}

int chu_so_dau_tien(int n) {
    if (n < 10) {
        return n;
    } else {
        return chu_so_dau_tien(n / 10);
    }
}
	
int dao_nguoc_so(int n) {
    if (n < 10) {
        return n;
    } else {
        int chu_so_cuoi = n % 10;
        int so_con_lai = n / 10;
        int so_dao_nguoc = 0;
        while (so_con_lai > 0) {
            so_dao_nguoc = so_dao_nguoc * 10 + chu_so_cuoi;
            chu_so_cuoi = so_con_lai % 10;
            so_con_lai /= 10;
        }
        so_dao_nguoc = so_dao_nguoc * 10 + chu_so_cuoi;
        return so_dao_nguoc;
    }
}

	


int main(){
	int n,x;
	do 
		{
			cout<<"n = " ;
			cin>>n;
			cout<<"x= " ;
			cin >> x ;
			if ( n< 0 ) 
				cout <<"Nhap n nguyen duong!!, hay nhap lai:" << endl;
	} while ( n<0);
	cout << Tong(n) << endl;
	cout << tong_bphuong(n)<< endl;
	cout << tong_pso(n) << endl;
	cout <<"Tong luy thua: " << tong_lthua(x, n) << endl;
	int soluong = dem_so_chu_so(n);
	cout <<"So luong chu so cua n: " <<  soluong << endl;
	int tong= (n) ;
	cout <<"Tong cac chu so cua n: " << tong << endl;
	cout <<"Dem so le trong n: " << dem_so_le(n) << endl;
	cout <<"Tong so chan trong n: " << tong_so_chan(n) << endl;
	cout <<"Chu so dau tien cua n: " << chu_so_dau_tien(n) << endl;
	int chu_so_dao_nguoc = dao_nguoc_so(n) ;
	cout << n <<" sau khi doi nguoc la: " << dao_nguoc_so(n) << endl;
	
	
	
	return 0;
	
	
}


