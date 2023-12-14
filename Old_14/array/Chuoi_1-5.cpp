#include <iostream>
#include <cstring>

using namespace std;

int demtu(const char *s) {
    int count = 0;
    bool inWord = false;

    while (*s) {
        if (*s == ' ' || *s == '\t' || *s == '\n') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            ++count;
        }
        ++s;
    }
    return count;
}

void xuattu(const char *s) {
    while (*s) {
        if (*s == ' ' || *s == '\t' || *s == '\n') {
            cout << endl;
        } else {
            cout << *s;
        }
        ++s;
    }
    cout << endl;
}

char *tudainhat(const char *s) {
    const char *begin = s;
    const char *end = s;
    int maxLen = 0;

    while (*s) {
        if (*s == ' ' || *s == '\t' || *s == '\n') {
            int len = s - begin;
            if (len > maxLen) {
                maxLen = len;
                end = s;
            }
            begin = s + 1;
        }
        ++s;
    }

    int len = s - begin;
    if (len > maxLen) {
        maxLen = len;
        end = s;
    }

    char *longestWord = new char[maxLen + 1];
    strncpy(longestWord, begin, maxLen);
    longestWord[maxLen] = '\0';

    return longestWord;
}

void hoa(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= ('a' - 'A');
        }
        ++i;
    }
}

void thuong(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += ('a' - 'A');
        }
        ++i;
    }
}




int main() {
    const int MAX_LEN = 1000;
    char chuoi[MAX_LEN];

    cout << "Nhap chuoi: ";
    cin.getline(chuoi, MAX_LEN);

    cout << "So tu trong chuoi: " << demtu(chuoi) << endl;
    cout << "Cac tu tren cac dong: " << endl;
    xuattu(chuoi);
    cout << "Tu dai nhat trong chuoi: " << tudainhat(chuoi) << endl;

    
	hoa(chuoi);
    cout << "Chuoi in hoa: " << chuoi <<endl;

    thuong(chuoi);
    cout << "Chuoi in thuong: " << chuoi <<endl;
    return 0;
}

