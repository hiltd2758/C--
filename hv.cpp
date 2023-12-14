#include<iostream>
using namespace std;
int main ()
{	int n;
	cout << "n =" ;
	cin >> n;
	int s = 0;
	for ( int i = 0; i <= n ; ++i)
	{
		s += 2*i + 1;
		
	}
	
	
	cout << s << endl;
	
	return 0;
}
