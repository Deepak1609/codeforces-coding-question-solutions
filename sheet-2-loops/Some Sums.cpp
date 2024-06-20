#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a given number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int total_sum = 0;

    // Iterate through each number from 1 to N
    for (int i = 1; i <= N; ++i) {
        int digit_sum = sumOfDigits(i);
        // Check if the sum of digits is between A and B
        if (A <= digit_sum && digit_sum <= B) {
            total_sum += i;
        }
    }

    // Print the result
    cout << total_sum << endl;

    return 0;
}
