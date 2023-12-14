#include <iostream>
using namespace std;
int main() {
    int year;
    do 
    	{
    		cout <<"Nhap nam: " ;
    		cin >> year;
    		
    		if ( year < 0) 
    			cout <<"Nam nhap khong hop le! so nam phai la so nguyen duong, hay nhap lai!" << endl;
		} while ( year < 0) ;

    int days_in_year = 365;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_year = 366;
    }

	// ngay dau
    int day_of_week = (year + year / 4 - year / 100 + year / 400) % 7;

    switch (day_of_week) {
        case 0:
            cout << "Ngay dau tien trong nam " << year << " là Chu nhat.";
            break;
        case 1:
            cout << "Ngay dau tien trong nam" << year << " la Thu hai.";
            break;
        case 2:
            cout << "Ngay dau tien trong nam " << year << " la Thu ba.";
            break;
        case 3:
            cout <<"Ngay dau tien trong nam " << year << " la Thu tu.";
            break;
        case 4:
            cout <<"Ngay dau tien trong nam " << year << " la Thu nam.";
            break;
        case 5:
            cout <<"Ngay dau tien trong nam "  << year << " la Thu sau.";
            break;
        case 6:
            cout <<"Ngay dau tien trong nam "  << year << " la Thu bay.";
            break;
    }

    return 0;
}

