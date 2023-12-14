#include <iostream>
#include<algorithm>
using namespace std;

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partition (int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Hàm tr?n hai m?ng dã s?p x?p
void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[]) {
    int i = 0, j = 0, k = 0;
    while (i<n1 && j <n2) {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while (i < n1)
        arr3[k++] = arr1[i++];
    while (j < n2)
        arr3[k++] = arr2[j++];
}

int main() {
    // Nh?p và s?p x?p m?ng th? nh?t
    int n1;
    cout << "Nhap kich thuoc mang 1: ";
    cin >> n1;
    int arr1[n1];
    cout << "Nhap mang 1: ";
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }
    quickSort(arr1, 0, n1 - 1);

    // Nh?p và s?p x?p m?ng th? hai
    int n2;
    cout << "Nhap kich thuoc mang 2: ";
    cin >> n2;
    int arr2[n2];
    cout << "Nhap mang 2: ";
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }
    quickSort(arr2, 0, n2 - 1);

    // Tr?n hai m?ng dã s?p x?p
    int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);

    cout << "Mang sau khi tron tang dan la: ";
    for (int i=0; i < n1+n2; i++)
        cout << arr3[i] << " ";
    cout << endl;

    return 0;
}

