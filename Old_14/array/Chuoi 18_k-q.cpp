#include <iostream>
#include <string>

using namespace std;

string xoaktvt(string s, char x, int pos) {
    if (s[pos] == x) {
        s.erase(pos, 1);
    }
    return s;
}

string xoatuvt(string s, int pos, int len) {
    s.erase(pos, len);
    return s;
}

string themch(string s, const char* subs, int pos) {
    s.insert(pos, subs);
    return s;
}

string trai(string s, int len) {
    return s.substr(0, len);
}

string phai(string s, int len) {
    int pos = s.length() - len;
    return s.substr(pos, len);
}

string giua(const char* s, int pos, int len) {
    return string(s).substr(pos, len);
}

string trichnguoc(string s, int pos, int len) {
    int startPos = pos + len - 1;
    string result = "";
    for (int i = startPos; i >= pos; --i) {
        result += s[i];
    }
    return result;
}

int main() {
    string input;
    char x;
    int pos, len;
    
    cout << "Nhap chuoi: ";
    getline(cin, input);

    cout << "Nhap ky tu muon xoa: ";
    cin >> x;
    cout << "Nhap vi tri muon xoa: ";
    cin >> pos;

    string xoaktvtResult = xoaktvt(input, x, pos);
    cout << "Chuoi sau khi xoa ky tu tai vi tri " << pos << ": " << xoaktvtResult << endl;
	cout << endl;

    cout << "Nhap vi tri bat dau xoa: ";
    cin >> pos;
    cout << "Nhap do dai muon xoa: ";
    cin >> len;

    string xoatuvtResult = xoatuvt(input, pos, len);
    cout << "Chuoi sau khi xoa tu vi tri " << pos << " voi do dai " << len << ": " << xoatuvtResult << endl;
	cout<< endl;
	
    string subs;
    const int MAX_LENGTH = 100;
    char buffer[MAX_LENGTH];
    cout << "Nhap chuoi con muon them: ";
    cin.ignore();
    cin.getline(buffer, MAX_LENGTH);
    subs = buffer;

    cout << "Nhap vi tri muon them: ";
    cin >> pos;

    string themchResult = themch(input, subs.c_str(), pos);
    cout << "Chuoi sau khi them chuoi con: " << themchResult << endl;
	cout << endl;
	
    cout << "Nhap do dai phan trai can lay: ";
    cin >> len;
    string traiResult = trai(input, len);
    cout << "Chuoi phan trai: " << traiResult << endl;
    cout<< endl;

    cout << "Nhap do dai phan phai can lay: ";
    cin >> len;
    string phaiResult = phai(input, len);
    cout << "Chuoi phan phai: " << phaiResult << endl;
    cout << "Nhap vi tri bat dau va do dai can lay: ";
    cin >> pos >> len;
    string giuaResult = giua(input.c_str(), pos, len);
    cout << "Chuoi giua: " << giuaResult << endl;
	cout<<endl;
    cout << "Nhap vi tri bat dau va do dai can lay de trich nguoc: ";
    cin >> pos >> len;
    string trichnguocResult = trichnguoc(input, pos, len);
    cout << "Chuoi trich nguoc: " << trichnguocResult << endl;

    return 0;
}

