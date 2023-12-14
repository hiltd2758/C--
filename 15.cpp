#include <iostream>
using namespace std;
int main() {
    int number;
    do {
        cout << "Nhap vao mot so nguyen co 2 chu so: ";
        cin >> number;
    } while (number < 10 || number > 99);
    cout << "Cach doc cua so " << number << " la: ";
    int chuc = number / 10; 
    int donVi = number % 10; 
    if (chuc == 1) {
        if (donVi == 0) {
            cout << "muoi";
        } else {
            cout << "muoi ";
            switch (donVi) {
                case 1:
                    cout << "mot";
                    break;
                case 2:
                    cout << "hai";
                    break;
                case 3:
                    cout << "ba";
                    break;
                case 4:
                    cout << "bon";
                    break;
                case 5:
                    cout << "lam";
                    break;
                case 6:
                    cout << "sau";
                    break;
                case 7:
                    cout << "bay";
                    break;
                case 8:
                    cout << "tam";
                    break;
                case 9:
                    cout << "chin";
                    break;
            }
        }
    } else {
        switch (chuc) {
        	
            case 2:
            	if(donVi == 0) 
            		cout<<"hai muoi";
            	else
                	cout << "hai";
                break;
            case 3:
                if(donVi == 0) 
            		cout<<"ba muoi";
            	else
                	cout << "ba";
                break;
            case 4:
                if(donVi == 0) 
            		cout<<"bon muoi";
            	else
                	cout << "bon";
                break;
            case 5:
                if(donVi == 0) 
            		cout<<"nam muoi";
            	else
                	cout << "nam";
                break;
            case 6:
                if(donVi == 0) 
            		cout<<"sau muoi";
            	else
                	cout << "sau";
                break;
            case 7:
                if(donVi == 0) 
            		cout<<"bay muoi";
            	else
                	cout << "bay";
                break;
            case 8:
                if(donVi == 0) 
            		cout<<"tam muoi";
            	else
                	cout << "tam";
                break;
            case 9:
                if(donVi == 0) 
            		cout<<"chin muoi";
            	else
                	cout << "chin";
                break;
        }
        if (donVi != 0) {
            cout << " muoi";
        }
        if (donVi != 1 && donVi != 5 && donVi != 0) {
            cout << " ";
        }
        switch (donVi) {
            case 1:
                cout << " mot";
                break;
            case 2:
                cout << "hai";
                break;
            case 3:
                cout << " ba";
                break;
            case 4:
            	cout << " bon" ;
            	break;
            
            case 6:
            	cout <<" sau" ;
            	break;
            case 7: 
            	cout <<"bay";
            	break;
            case 8:
                cout << " tam";
                break;
            case 9:
                cout << "chin";
                break;
        }
        if (donVi == 5) {
            cout << " lam";
        }
    }
    cout << endl;
    return 0;
}

