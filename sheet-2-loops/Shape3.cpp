#include <iostream>
using namespace std;

void printPattern(int n) {
    // Print the top half of the pattern
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Print the bottom half of the pattern
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >>n;
    printPattern(n);
    return 0;
}
