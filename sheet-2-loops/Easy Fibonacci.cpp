#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a = 0, b = 1, sum = 0;

    //for(int i = 1; i<=n; i++)
    //{
        if(n == 1)
        {
            cout<<a<<endl;
        }
        else if(n == 2)
        {
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<a<<" "<<b<<" ";
            while(n - 2>0)
            {
                sum = a + b;
                a = b;
                b = sum;
                cout<<sum<<" ";
                n--;
            }


        }
   // }
    return 0;
}
