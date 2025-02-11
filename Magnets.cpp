#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    string s;
    cin >> s;
    char prev = s[1];
    int groups = 1;

    for (int i = 1; i < n; ++i) {
        cin >> s;
        if (prev == s[0]) {
            groups++;
        }
        prev = s[1];
    }

    cout << groups << endl;
    return 0;
}
