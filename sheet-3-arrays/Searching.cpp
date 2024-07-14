#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, n,i;
    cin>>n;
    bool flag = 0;
    int arr[n];

    for( i = 1; i<=n; i++)
    {
        cin>>arr[i];
    }

    cin>>x;

    for(i = 1; i<=n; i++)
    {
        if(x==arr[i])
        {
            cout<<i-1<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout<<"-1"<<endl;

    return 0;
}
