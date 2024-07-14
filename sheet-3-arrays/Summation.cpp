#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin>>n;
    long long arr[n];
    long long sum = 0;

    for( i = 1; i<=n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    cout<<abs(sum)<<endl;
    return 0;
}
