#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrimes(int N) {
    for (int num = 2; num <= N; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    printPrimes(N);
    return 0;
}
