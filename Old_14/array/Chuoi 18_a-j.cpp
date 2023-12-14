#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>
using namespace std;

int demtu(string s) {
    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}

void xuattu(string s) {
    stringstream ss(s);
    string word;
    while (ss >> word) {
        cout << word << endl;
    }
}

string tudainhat(string s) {
    stringstream ss(s);
    string word;
    string longestWord = "";
    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }
    return longestWord;
}

string hoa(string s) {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    return s;
}

string thuong(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

string tu(string s) {
    bool foundSpace = true;
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (foundSpace) {
                s[i] = toupper(s[i]);
                foundSpace = false;
            } else {
                s[i] = tolower(s[i]);
            }
        } else {
            foundSpace = true;
        }
    }
    return s;
}

string cattrai(string s) {
    s.erase(0, s.find_first_not_of(" \t"));
    return s;
}

string catphai(string s) {
    s.erase(s.find_last_not_of(" \t") + 1);
    return s;
}

string cat(string s) {
    string result;
    string word;
    stringstream ss(s);
    while (ss >> word) {
        result += word + " ";
    }
    result.erase(result.find_last_not_of(" \t") + 1);
    return result;
}

string xoakt(string s, char x) {
    s.erase(remove(s.begin(), s.end(), x), s.end());
    return s;
}

int main() {
    string s;
    char x;

    cout << "Nhap chuoi: ";
    getline(cin, s);

    cout << "So tu trong chuoi: " << demtu(s) << endl;

    cout << "Cac tu trong chuoi: ";
    xuattu(s);

    cout << "Tu dai nhat trong chuoi: " << tudainhat(s) << endl;

    cout << "Chuoi sau khi chuyen cac ky tu dau thanh ky tu hoa: " << tu(s) << endl;

    cout << "Chuoi sau khi cat bo khoang trang ben trai: " << cattrai(s) << endl;

    cout << "Chuoi sau khi cat bo khoang trang ben phai: " << catphai(s) << endl;

    cout << "Chuoi sau khi cat bo khoang trang giua 2 tu: " << cat(s) << endl;

    cout << "Nhap ky tu can xoa: ";
    cin >> x;
    cout << "Chuoi sau khi xoa ky tu '" << x << "': " << xoakt(s, x) << endl;

    return 0;
}

