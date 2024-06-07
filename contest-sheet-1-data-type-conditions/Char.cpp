#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c>=65 && c<=90)
    {
        c = c + 32;
        cout<<c<<endl;;
    }
    else
    {
        c = c - 32;
        cout<<c;
    }
    return 0;
}





