#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int j = 1;j<= 4 * n;j++)
        {
            if( j % 4 == 0)
            {
                cout<<"PUM"<<endl;
            }
            if(j%4 != 0)
            {
                cout<<j<<" ";
            }
        }
    return 0;
}
