#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }
    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;
    bool isSerejaTurn = true;
    
    while (left <= right) {
        int chosen;
        if (cards[left] > cards[right]) {
            chosen = cards[left];
            left++;
        } else {
            chosen = cards[right];
            right--;
        }
        if (isSerejaTurn) {
            sereja += chosen;
        } else {
            dima += chosen;
        }
        isSerejaTurn = !isSerejaTurn;
    }
    
    cout << sereja << " " << dima << endl;
    return 0;
}
