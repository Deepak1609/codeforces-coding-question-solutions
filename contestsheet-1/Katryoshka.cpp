#include <bits/stdc++.h>
using namespace std;

int main() {

    unsigned long long n, m, k;
    cin >> n >> m >> k;

    unsigned long long katryoshkas = 0;

    // Step 1: Use combination 3: 1 eye + 1 mouth + 1 body
    unsigned long long comb3 = min({n, m, k});
    katryoshkas += comb3;
    n -= comb3;
    m -= comb3;
    k -= comb3;

    // Step 2: Use combination 2: 2 eyes + 1 mouth + 1 body
    unsigned long long comb2 = min({n / 2, m, k});
    katryoshkas += comb2;
    n -= comb2 * 2;
    m -= comb2;
    k -= comb2;

    // Step 3: Use combination 1: 2 eyes + 1 body
    unsigned long long comb1 = min(n / 2, k);
    katryoshkas += comb1;

    cout << katryoshkas << endl;

    return 0;
}

