#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,n,m,mini = INT_MIN,maxi =0;
    cin>>n;
    for(i = 0; i<n; i++)
    {
        cin>>m;
        if(m > mini)
        {
            maxi = m;
            mini = m;
        }
        else if(m>maxi)
        {
            maxi = m;
        }

    }
    cout<<maxi<<endl;
    return 0;
}
