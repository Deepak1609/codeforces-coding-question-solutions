#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n, lastm = 0, lastn = 0;
    cin>>n>>m;

    lastm = m % 10;
    lastn = n % 10;

    cout<<lastm + lastn<<endl;



    return 0;
}


