#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sum = 0;
        cin>>m>>n;
        if(m>n)
        {
            for(int i = n+1; i<m; i++)
            {
                if(i % 2 != 0)
                {
                    sum += i;
                }
            }
            cout<<sum<<endl;
        }
        else
        {
            for(int i = m+1; i<n; i++)
            {
                if(i % 2 != 0)
                {
                    sum += i;
                }
            }
            cout<<sum<<endl;
        }

    }
    return 0;
}
