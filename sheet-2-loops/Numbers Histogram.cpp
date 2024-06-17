#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    int n,x;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        cin>>x;
        for(int j = 0; j<x; j++)
        {
            if((c=='+') || (c=='-')|| (c=='*') ||(c=='/') )
            {
                cout<<c;
            }

        }
        cout<<endl;
    }
    return 0;
}
