#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, c = 0;
    cin >> x;

    if (x <= 1) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            c++;
            break; // No need to check further if one divisor is found
        }
    }

    if (c == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
