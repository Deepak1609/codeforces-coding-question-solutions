#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,rev =0,rem;
    cin>>n;
    a = n;
    while(n>0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    cout<<rev<<endl;
    if(rev == a)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
