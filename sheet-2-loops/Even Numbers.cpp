#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool flag = false;
    cin>>n;
    for(int i = 2; i<=n; i++)
    {
        if(i % 2 == 0)
        {
            cout<<i<<endl;
            flag = true;
        }
    }
    if(flag != true)
    {
        cout<<"-1"<<endl;
    }

}

