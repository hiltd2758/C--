#include<iostream>
using namespace std;

int main() {
    double n ;
    cout <<"Nhap so thu 1: " ;
    cin >> n;
    double max = n;
    double min = n;
    for ( int i  = 2; i <= 3; ++i)  
    	{
    		cout <<"Nhap so thu " << i << ": " ;
    		cin >> n;
    		if ( n > max) 
    			max = n;
    		else 
    			min = n;
		}
    

    cout << "So lon nhat la: " << max << endl;
    cout << "So nho nhat la: " << min << endl;

    return 0;
}

