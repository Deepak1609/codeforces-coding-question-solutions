#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,l,r,sum;
    cin>>t;

    while(t--)
    {
        cin>>l>>r;
        sum = 0;
        for(int i = l; i<=r; i++)
        {
            sum += i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
