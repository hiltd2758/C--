#include <iostream>
#include <cstring>

using namespace std;

char* giua(const char* s, int pos, int len) {
    char* result = new char[len + 1];
    strncpy(result, s + pos, len);
    result[len] = '\0';
    return result;
}

char* trichnguoc(const char* s, int pos, int len) {
    int strLength = strlen(s);
    char* result = new char[len + 1];
    for (int i = 0; i < len; i++) {
        result[i] = s[strLength - pos - i - 1];
    }
    result[len] = '\0';
    return result;
}

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];
    cout << "Nhap chuoi: ";
    cin.getline(input, MAX_LENGTH);

    int pos, len;
    cout << "Nhap vi tri bat dau: ";
    cin >> pos;
    cout << "Nhap do dai: ";
    cin >> len;

    char* giuaResult = giua(input, pos, len);
    cout << "Chuoi giua: " << giuaResult << endl;
    delete[] giuaResult;

    char* trichnguocResult = trichnguoc(input, pos, len);
    cout << "Chuoi trich nguoc: " << trichnguocResult << endl;
    delete[] trichnguocResult;

    return 0;
}

