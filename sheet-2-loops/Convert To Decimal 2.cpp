#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

// Function to count the number of ones in the binary representation of a number
int countOnes(int n) {
    return bitset<32>(n).count();
}

// Function to convert a binary number consisting of a certain number of ones to its decimal form
int binaryOnesToDecimal(int ones_count) {
    return (1 << ones_count) - 1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int ones_count = countOnes(N);
        int result = binaryOnesToDecimal(ones_count);

        cout << result << endl;
    }

    return 0;
}
