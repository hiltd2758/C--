#include <iostream>
using namespace std;

void nhapmang(int a[], int n)
{
	for ( int i =0; i < n; ++i)
		{
			cout<<"a[" << i << "]: " ;
			cin >> a[i];
		}
}
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


int partition(int a[], int low, int high) {
    int pivot = a[high]; 
    int i = (low - 1); 

    for (int j = low; j <= high - 1; j++) {
        
        if (a[j] <= pivot) {
            i++; 
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return (i + 1);
}


void quickSort(int a[], int low, int high) {
    if (low < high) {

        int pi = partition(a, low, high);

        
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}


void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[100];
    int n;
    cout<<"Nhap so phan tu cua mang: ";
    cin >> n;
	
	nhapmang(a, n);
    cout << "Mang ban dau: \n";
    printArray(a, n);

    quickSort(a, 0, n - 1);

    cout << "Mang sau khi sap xep: \n";
    printArray(a, n);
    return 0;
}

