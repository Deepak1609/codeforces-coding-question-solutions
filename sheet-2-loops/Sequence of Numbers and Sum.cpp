#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(-1)
    {
        int m,n;
        cin>>m>>n;
        if(m>0 && n>0)
        {
            int sum = 0;
            if(m>n)
            {
                for(int i = n; i<=m; i++)
                {
                    cout<<i<<" ";
                    sum +=i;
                }
                cout<<"sum ="<<sum<<endl;
            }
            else
            {
                for(int i = m; i<=n; i++)
                {
                    cout<<i<<" ";
                    sum +=i;
                }
                cout<<"sum ="<<sum<<endl;
            }
        }
        else
        {
            return 0;
        }
    }
}
