#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,l,r,maxi,mini;
    cin>>t;

    while(t--)
    {
        cin>>l>>r;
        /*sum = 0;
        for(int i = l; i<=r; i++)
        {
            sum += i;
        }
        cout<<sum<<endl;*/
        maxi = max(l,r);
        mini = min(l,r);
        mini--;
        long long r1 = mini * (mini + 1) / 2;
        long long r2 = maxi * (maxi + 1) / 2;
        cout<<r2-r1<<endl;
    }
    return 0;
}
