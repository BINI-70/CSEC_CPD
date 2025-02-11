#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[5][5];
    int row_one = 0, col_one = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                row_one = i;
                col_one = j; 
            }
        }
    }
    int row_moves = abs(row_one - 2); 
    int col_moves = abs(col_one - 2); 
    int total_moves = row_moves + col_moves;
    cout << total_moves << endl;

    return 0;
}
