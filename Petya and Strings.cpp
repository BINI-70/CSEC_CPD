#include <iostream>
#include <string>
using namespace std;
void toLowercase(string& s) {
    for (char& c : s) {
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
    }
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    toLowercase(s1);
    toLowercase(s2);
    if (s1 < s2) {
        cout << "-1" << endl;
    } else if (s1 > s2) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
