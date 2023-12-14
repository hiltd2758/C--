#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

char *tu(char *s) {
    bool foundSpace = true;
    for (int i = 0; s[i] != '\0'; i++) {
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

char *cattrai(char *s) {
    int i = 0;
    while (s[i] == ' ' || s[i] == '\t') {
        i++;
    }
    memmove(s, s + i, strlen(s) - i + 1);
    return s;
}

char *catphai(char *s) {
    int len = strlen(s);
    while (len > 0 && (s[len - 1] == ' ' || s[len - 1] == '\t')) {
        s[len - 1] = '\0';
        len--;
    }
    return s;
}

char *cat(char *s) {
    int len = strlen(s);
    int j = 0;
    bool spaceFound = false;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' || s[i] == '\t') {
            if (!spaceFound) {
                s[j++] = ' ';
                spaceFound = true;
            }
        } else {
            s[j++] = s[i];
            spaceFound = false;
        }
    }
    s[j] = '\0';

    return s;
}

char *xoakt(char *s, char x) {
    int len = strlen(s);
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] != x) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';

    return s;
}

char *xoaktvt(char *s, char x, int pos) {
    int len = strlen(s);
    int j = 0;
    bool removed = false;

    for (int i = 0; i < len; i++) {
        if (s[i] == x && i >= pos && !removed) {
            removed = true;
            continue;
        }
        s[j++] = s[i];
    }
    s[j] = '\0';

    return s;
}

char *xoatuvt(char *s, int pos, int len) {
    int slen = strlen(s);

    if (pos < 0 || pos >= slen || len <= 0) {
        return s;
    }

    if (pos + len > slen) {
        len = slen - pos;
    }

    for (int i = pos; i < slen - len; i++) {
        s[i] = s[i + len];
    }
    s[slen - len] = '\0';

    return s;
}

char *themch(char *s, const char *subs, int pos) {
    int len = strlen(s);
    int sublen = strlen(subs);

    if (pos < 0 || pos > len) {
        return s;
    }

    memmove(s + pos + sublen, s + pos, len - pos + 1);
    memcpy(s + pos, subs, sublen);

    return s;
}

char *trai(char *s, int len) {
    int slen = strlen(s);
    if (len > slen) {
        len = slen;
    }
    s[len] = '\0';
    return s;
}

char *phai(char *s, int len) {
    int slen = strlen(s);
    if (len > slen) {
        len = slen;
    }
    memmove(s, s + slen - len, len + 1);
    return s;
}

char *trichnguoc(char *s, int pos, int len) {
    int slen = strlen(s);
    if (pos < 0 || pos >= slen || len <= 0) {
        return s;
    }

    if (pos + len > slen) {
        len = slen - pos;
    }

    memmove(s, s + slen - pos - len, len);
    s[len] = '\0';

    return s;
}


int main() {
    char chuoi[100];

    cout << "Nhap chuoi: ";
    cin.getline(chuoi, sizeof(chuoi));

    tu(chuoi);
    cout << "Chuoi sau khi chuyen cac ky tu dau thanh ky tu hoa: " << chuoi << endl;

    cattrai(chuoi);
    cout << "Chuoi sau khi cat bo khoang trang ben trai: " << chuoi <<endl;

    catphai(chuoi);
    cout << "Chuoi sau khi cat bo khoang trang ben phai: " << chuoi << endl;

    cat(chuoi);
    cout << "Chuoi sau khi cat bo khoang trang giua 2 tu: " << chuoi << endl;

    char x = 'a';
    xoakt(chuoi, x);
    cout << "Chuoi sau khi xoa ky tu '" << x << "': " << chuoi << endl;

    char y = 'b';
    int pos = 2;
    xoaktvt(chuoi, y, pos);
    cout << "Chuoi sau khi xoa ky tu '" << y << "' tu vi tri " << pos << ": " << chuoi << endl;

    int start = 5;
    int length = 3;
    xoatuvt(chuoi, start, length);
    cout << "Chuoi sau khi xoa " << length << " ky tu tu vi tri " << start << ": " << chuoi << endl;

    const char *subs = "them";
    int insertPos = 8;
    themch(chuoi, subs, insertPos);
    cout << "Chuoi sau khi chen '" << subs << "' vao vi tri " << insertPos << ": " << chuoi << endl;

    int extractLen = 6;
    char extracted[20];
    strncpy(extracted, chuoi, extractLen);
    extracted[extractLen] = '\0';
    cout << "Chuoi sau khi trich " << extractLen << " ky tu tu dau: " << extracted << endl;

    strncpy(extracted, chuoi + strlen(chuoi) - extractLen, extractLen);
    extracted[extractLen] = '\0';
    cout << "Chuoi sau khi trich " << extractLen << " ky tu tu cuoi: " << extracted << endl;
    
    
    int pos1;
    int len1;
    cout << "Nhap vi tri bat dau: ";
    cin >> pos1;
    cout << "Nhap do dai: ";
    cin >> len1;
    trichnguoc(chuoi, pos1, len1);
    cout << "Chuoi sau khi trich nguoc: " << chuoi << endl;


    return 0;
}

  


