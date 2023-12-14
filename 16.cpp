#include <iostream>
using namespace std;

int main() {
  int number;

  do {
    cout << "Nhap vao mot so nguyen co 3 chu so: ";
    cin >> number;
  } while (number < 100 || number > 999);

  cout << "Cach doc cua so " << number << " la: ";

  int tram = number / 100; 
  int chuc = (number / 10) % 10; 
  int donVi = number % 10; 

  switch (tram) {
    case 1:
      cout << "mot tram";
      break;
    case 2:
      cout << "hai tram";
      break;
    case 3:
      cout << "ba tram";
      break;
    case 4:
      cout << "bon tram";
      break;
    case 5:
      cout << "nam tram";
      break;
    case 6:
      cout << "sau tram";
      break;
    case 7:
      cout << "bay tram";
      break;
    case 8:
      cout << "tam tram";
      break;
    case 9:
      cout << "chin tram";
      break;
  }  

  if (chuc != 0) {
    cout << " ";
    switch (chuc) {
      
      case 2:
        cout << "hai";
        break;
      case 3:
        cout << " ba";
        break;
      case 4:
        cout << " bon";
        break;
      case 5:
        cout << "nam"; 
        break;
      case 6:
        cout << " sau";
        break;
      case 7:
        cout << " bay";
        break;
      case 8:
        cout << " tam";
        break;
      case 9:
        cout << " chin";
        break;
    }

  }

  
  if ( chuc!= 0 )
  	cout << " muoi";
    switch (donVi) {
      case 1:
      	if(chuc == 0) 
      		cout << " le mot";
      	else 
      		cout<<" mot";
        break;
      case 2:
        if(chuc == 0) 
      		cout << " le hai";
      	else 
      		cout<<" hai";
        break;
      case 3:
        if(chuc == 0) 
      		cout << " le ba";
      	else 
      		cout<<" ba";
        break;
      case 4:
        if(chuc == 0) 
      		cout << " le bon";
      	else 
      		cout<<" bon";
        break;
      case 5:
      	if ( chuc==0)
      		cout<< " le nam";
      	break;
      case 6:
        if(chuc == 0) 
      		cout << " le sau";
      	else 
      		cout<<" sau";
        break;
      case 7:
        if(chuc == 0) 
      		cout << " le bay";
      	else 
      		cout<<" bay";
        break;
      case 8:
        if(chuc == 0) 
      		cout << " le tam";
      	else 
      		cout<<" tam";
        break;
      case 9:
        if(chuc == 0) 
      		cout << " le chin";
      	else 
      		cout<<" chin";
        break;
    }
	if ( chuc != 0 && donVi == 5 ) 
		cout << " lam" ;
 
  cout << endl;

  return 0;
}

