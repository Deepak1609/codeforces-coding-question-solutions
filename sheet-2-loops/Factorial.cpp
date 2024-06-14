#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long fact = 1;
        for( i = 1; i<=n; i++)
        {
            fact = fact * i;
        }
        cout<<fact<<endl;

    }
    return 0;

}
