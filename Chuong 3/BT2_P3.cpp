#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    const int maxSize = 50;

    vector<string> fullName(maxSize); 
    vector<string> firstName(maxSize); 
    vector<string> lastName(maxSize); 

    int numberOfStudents;
    cout << "Nhap so sinh vien: ";
    cin >> numberOfStudents;

    cin.ignore(); 

    cout << "Nhap ho ten cua sinh vien (cach nhau bang Enter):" << endl;
    for (int i = 0; i < numberOfStudents; ++i) {
        getline(cin, fullName[i]);
    }

    
    for (int i = 0; i < numberOfStudents; ++i) {
        int spacePos = fullName[i].find(' '); 
        firstName[i] = fullName[i].substr(0, spacePos);
        lastName[i] = fullName[i].substr(spacePos + 1); 
    }

    sort(fullName.begin(), fullName.begin() + numberOfStudents, [](const string &a, const string &b) {
        return a.substr(a.find(' ') + 1) < b.substr(b.find(' ') + 1);
    });

    cout << "Nhung sinh vien co ho la 'Nguyen':" << endl;
    for (int i = 0; i < numberOfStudents; ++i) {
        if (fullName[i].substr(0, 6) == "Nguyen") {
            cout << fullName[i] << endl;
        }
    }

    int maxLen = 0;
    for (int i = 0; i < numberOfStudents; ++i) {
        if (lastName[i].length() > maxLen) {
            maxLen = lastName[i].length();
        }
    }

    cout << "Sinh vien co phan ten co nhieu ky tu nhat:" << endl;
    for (int i = 0; i < numberOfStudents; ++i) {
        if (lastName[i].length() == maxLen) {
            cout << fullName[i] << endl;
        }
    }

    return 0;
}

