#include <bits/stdc++.h>
using namespace std;

bool check_operations(long long a, long long b, long long c, long long d) {
   // if (a + b + c == d) return true;
    if (a + b - c == d) return true;
    else if (a + b * c == d) return true;
    else if (a - b + c == d) return true;
    //if (a - b - c == d) return true;
    else if (a - b * c == d) return true;
    else if (a * b + c == d) return true;
    else if (a * b - c == d) return true;
    //if (a * b * c == d) return true;

    // Also check for cases where the operations are applied with different groupings
    // if ((a + b) * c == d) return true;
    // if ((a - b) * c == d) return true;
    // if ((a * b) + c == d) return true;
    // if ((a * b) - c == d) return true;

    return false;
}

int main() {

    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (check_operations(a, b, c, d)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
