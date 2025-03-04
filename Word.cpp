#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    int upper = 0, lower = 0;
    for (char c : s) {
        if (isupper(c)) {
            upper++;
        } else {
            lower++;
        }
    }

    if (upper > lower) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;

    return 0;
}
