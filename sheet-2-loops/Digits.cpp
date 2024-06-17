#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    while(n--)
    {
        string num;
        cin>>num;
        int z = num.size();
        for( i = z - 1 ; i>=0; i--)
        {
            cout<<num[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
