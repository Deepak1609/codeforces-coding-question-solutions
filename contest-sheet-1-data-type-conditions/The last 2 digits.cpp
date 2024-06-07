
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {

    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    unsigned long long product = ((a % 100) * (b % 100)  * ( c % 100)  * (d % 100) % 100) % 100;

    // Output the result, ensuring it has two digits
    if (product < 10) {
        cout << "0" << product << endl; // Print leading zero if necessary
    } else {
        cout << product << endl;
    }



    return 0;
}
