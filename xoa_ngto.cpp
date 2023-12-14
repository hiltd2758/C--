#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout<<"ham luong giac cua sin \n";
	for(int i=0;i<=180;i+=5)
		cout<<"sin"<<i<<"="<<sin(i)<<endl;
	cout<<"ham luong giac cua cos "<<endl;
	for(int j=0;j<=180;j+=5)
		cout<<"cos"<<j<<"="<<cos(j)<<endl;
	cout<<"ham luong giac cua tan\n";
	for(int k=0;k<=180;k+=5)
		cout<<"tan"<<k<<"="<<tan(k)<<endl;
	return 0;
}
