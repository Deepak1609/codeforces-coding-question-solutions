#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c)
    {
        if(b>=c)
        {
            cout<<c<<" "<<a<<endl;
        }
        else
        {
            cout<<b<<" "<<a<<endl;
        }
    }
    else if(b>=a && b>=c)
    {
        if(a>=c)
        {
            cout<<c<<" "<<b<<endl;
        }
        else
        {
            cout<<a<<" "<<b<<endl;
        }
    }
    else
    {
        if(a>=b)
        {
            cout<<b<<" "<<c<<endl;
        }
        else
        {
            cout<<a<<" "<<c<<endl;
        }
    }



    return 0;
}





